module D = Webapi.Dom;
module Document = Webapi.Dom.Document;
module Element = Webapi.Dom.Element;
module HtmlElement = Webapi.Dom.HtmlElement;
let document = Webapi.Dom.document;

[@bs.val]
external querySelector: string => option(Dom.element) =
  "window.document.querySelector";

[@bs.send] external focus: Element.t => unit = "focus";
[@bs.set] external setMethod: (D.HtmlFormElement.t, string) => unit = "method";

external elementToHtmlFormElement: Dom.element => D.HtmlFormElement.t =
  "%identity";

let onInput = _ => Js.log("CLICKED");
let createInput = (attrs: array((string, string))) => {
  let input = document |> Document.createElement("input");
  // let input =
  let _ =
    attrs->Belt.Array.map(attr =>
      Element.setAttribute(fst(attr), snd(attr), input)
    );
  input |> Element.addEventListener("input", onInput);

  input;
};
let createLabel = (attrs: array((string, string)), innerText) => {
  let label = document |> Document.createElement("label");

  let _ = label->Element.setInnerText(_, innerText);
  let _ =
    attrs->Belt.Array.map(attr =>
      Element.setAttribute(fst(attr), snd(attr), label)
    );

  label;
};
let createContainer = () => {
  let container = document |> Document.createElement("div");
  let container =
    container
    |> Element.asHtmlElement
    |> Belt.Option.getExn
    |> (
      el => {
        HtmlElement.setClassName(el, "form-example");

        el |> HtmlElement.addEventListener("click", onInput);
        el;
      }
    );
  container;
};

let createForm = () => {
  let form = document |> Document.createElement("form");
  // let form = document |> Document.createElement("form");
  Element.setId(form, "mozilla");
  Element.setAttribute("action", "", form);

  form->elementToHtmlFormElement->setMethod(_, "get");
  let container1 = createContainer();
  let nameLabel1 = createLabel([|("label", "name")|], "Enter your name: ");
  let nameInput1 =
    createInput([|
      ("type", "text"),
      ("name", "name"),
      ("id", "name"),
      ("required", "true"),
    |]);

  container1 |> HtmlElement.appendChild(nameLabel1);

  container1 |> HtmlElement.appendChild(nameInput1);
  form
  |> Element.asHtmlElement
  |> Belt.Option.getExn
  |> HtmlElement.appendChild(container1);
  let container2 = createContainer();
  let nameLabel2 =
    createLabel([|("label", "email")|], "Enter your email: ");

  let nameInput2 =
    createInput([|
      ("type", "email"),
      ("name", "email"),
      ("id", "email"),
      ("required", "true"),
    |]);

  container2 |> HtmlElement.appendChild(nameLabel2);

  container2 |> HtmlElement.appendChild(nameInput2);
  form
  |> Element.asHtmlElement
  |> Belt.Option.getExn
  |> HtmlElement.appendChild(container2);
  let container3 = createContainer();

  let nameInput3 =
    createInput([|("type", "submit"), ("value", "Subscribe")|]);

  container3 |> HtmlElement.appendChild(nameInput3);
  form
  |> Element.asHtmlElement
  |> Belt.Option.getExn
  |> HtmlElement.appendChild(container3);

  form;
};

let init = (mainSelector: string): unit => {
  let mainEl =
    switch (document |> Document.querySelector(mainSelector)) {
    | None =>
      raise(Invalid_argument("document.querySelector " ++ mainSelector))
    | Some(el) => el
    };

  let moz = createForm();
  Js.log2("moz", moz);

  mainEl |> Element.appendChild(moz);

  ();
};
