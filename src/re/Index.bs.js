// Generated by BUCKLESCRIPT VERSION 5.0.4, PLEASE EDIT WITH CARE
'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var Belt_Option = require("bs-platform/lib/js/belt_Option.js");
var Caml_option = require("bs-platform/lib/js/caml_option.js");
var Relude_Option = require("relude/src/Relude_Option.bs.js");
var ReQuery$Practice = require("./lib/requery/ReQuery.bs.js");
var Relude_Js_Console = require("relude/src/js/Relude_Js_Console.bs.js");
var Webapi__Dom__Element = require("bs-webapi/src/Webapi/Webapi__Dom/Webapi__Dom__Element.js");
var Webapi__Dom__HtmlElement = require("bs-webapi/src/Webapi/Webapi__Dom/Webapi__Dom__HtmlElement.js");

Relude_Js_Console.IO[/* log */0]("Hello, BuckleScript and Reason!");

var data = /* array */[
  1,
  2,
  3
];

var documentBody = Belt_Option.getExn(Webapi__Dom__Element.asHtmlElement(Belt_Option.getExn(Caml_option.nullable_to_opt(document.body))));

console.log(documentBody);

function printClicked(param) {
  console.log("CLICKED");
  return /* () */0;
}

function applicationRoot_000(param) {
  var el = Belt_Option.getExn(Webapi__Dom__Element.asHtmlElement(document.createElement("div")));
  el.id = "applicationRoot";
  el.className = "root";
  el.setAttribute("style", "background-color: red; height: 200px; width: 200px;");
  el.addEventListener("click", printClicked);
  return el;
}

function applicationRoot_001(rootNode) {
  var parent = Curry._2(Relude_Option.flatMap, Webapi__Dom__HtmlElement.ofNode, Caml_option.nullable_to_opt(rootNode.parentNode));
  if (parent !== undefined) {
    var p = Caml_option.valFromOption(parent);
    var res = p.removeChild(rootNode);
    console.log(p);
    return Caml_option.some(res);
  }
  
}

var applicationRoot = /* record */[
  applicationRoot_000,
  applicationRoot_001
];

var root = Curry._1(applicationRoot_000, /* () */0);

documentBody.appendChild(root);

console.log(root);

var headerAttrs = { };

headerAttrs["color"] = "blue";

var header = ReQuery$Practice.makeElement("h1", Caml_option.some(headerAttrs), undefined);

console.log(header);

var PracticeMain = /* module */[
  /* RQ */0,
  /* data */data,
  /* documentBody */documentBody,
  /* printClicked */printClicked,
  /* applicationRoot */applicationRoot,
  /* root */root,
  /* headerAttrs */headerAttrs,
  /* header */header
];

exports.PracticeMain = PracticeMain;
/*  Not a pure module */
