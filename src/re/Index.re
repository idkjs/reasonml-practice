  [@bs.send] [@bs.return nullable]
  external message: Js_exn.t => option(string) = "message";
  [@bs.send] [@bs.return nullable]
  external name: Js_exn.t => option(string) = "name";

module App = {
  open Webapi.Dom;
  let unwrap = (value: option('a)): 'a => Belt.Option.getExn(value);
[@bs.get]
external dataset: Dom.element_like('a) => Js.Dict.t(string) = "dataset";
  [@bs.val]
  external querySelector: string => option(Dom.element) =
    "window.document.querySelector";

  [@bs.set]
  external setMethod: (Dom.htmlFormElement, string) => unit = "method";

  external elementToHtmlFormElement: Dom.element => Dom.htmlFormElement =
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
      |> unwrap
      |> (
        el => {
          HtmlElement.setClassName(el, "form-example");

          el |> HtmlElement.addEventListener("click", onInput);
          el;
        }
      );
    container;
  };

  let createForm = document => {
    let form = document |> Document.createElement("form");
    Element.setId(form, "mozilla");
    Element.setAttribute("action", "", form);

    form->elementToHtmlFormElement->setMethod(_, "get");
    let container1 = createContainer();
    let nameLabel1 =
      createLabel([|("label", "name")|], "Enter your name: ");
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
    |> unwrap
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
    |> unwrap
    |> HtmlElement.appendChild(container2);
    let container3 = createContainer();

    let nameInput3 =
      createInput([|("type", "submit"), ("value", "Subscribe")|]);

    container3 |> HtmlElement.appendChild(nameInput3);
    form
    |> Element.asHtmlElement
    |> unwrap
    |> HtmlElement.appendChild(container3);

    form;
  };

  let documentBody =
    document
    ->Document.unsafeAsHtmlDocument // returns option(Dom.element)
    ->HtmlDocument.body
    ->unwrap
    ->Element.asHtmlElement
    ->unwrap;
  Js.log2("documentBody", documentBody);

  let printClicked = _ => Js.log("CLICKED");
let form = createForm(document);
  type applicationRoot = {make: unit => Dom.htmlElement};
  let applicationRoot = {
    make: _ =>
      document
      |> Document.createElement("div")
      |> Element.asHtmlElement
      |> unwrap
      |> (
        el => {
          let _ = el |> HtmlElement.appendChild(form);
          el;
        }
      ),
  };

  let root = applicationRoot.make();

  documentBody |> HtmlElement.appendChild(root);
 Js.log2("dataset(form)",dataset(form))
};
