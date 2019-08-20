// Generated by BUCKLESCRIPT VERSION 5.0.4, PLEASE EDIT WITH CARE
'use strict';


function Make(M) {
  var run = M[/* run */0];
  return /* module */[/* run */run];
}

function map(effect) {
  var run = function () {
    effect();
    return /* () */0;
  };
  return /* module */[/* run */run];
}

function bind(M) {
  var run = function () {
    return M[/* run */0]();
  };
  return /* module */[/* run */run];
}

function join(M) {
  M[/* run */0]();
  return /* () */0;
}

function make(el, name, value) {
  switch (el.tag | 0) {
    case 0 : 
        var el$1 = el[0];
        return (function (param) {
            el$1.setAttribute(name, value);
            return /* () */0;
          });
    case 1 : 
        var el$2 = el[0];
        return (function (param) {
            el$2.setAttribute(name, value);
            return /* () */0;
          });
    case 2 : 
        var el$3 = el[0];
        return (function (param) {
            el$3.setAttribute(name, value);
            return /* () */0;
          });
    
  }
}

var SetAttribute = /* module */[/* make */make];

var myEffect = map((function () {
        console.log("Side Effects!!");
        return /* () */0;
      }));

exports.Make = Make;
exports.map = map;
exports.bind = bind;
exports.join = join;
exports.SetAttribute = SetAttribute;
exports.myEffect = myEffect;
/* myEffect Not a pure module */
