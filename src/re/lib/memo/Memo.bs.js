// Generated by BUCKLESCRIPT VERSION 5.0.4, PLEASE EDIT WITH CARE
'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var Hashtbl = require("bs-platform/lib/js/hashtbl.js");
var Caml_obj = require("bs-platform/lib/js/caml_obj.js");

var standardEqual = Caml_obj.caml_equal;

function applyTuple1(a, fn) {
  return Curry._1(fn, a);
}

function applyTuple2(param, fn) {
  return Curry._2(fn, param[0], param[1]);
}

function applyTuple3(param, fn) {
  return Curry._3(fn, param[0], param[1], param[2]);
}

function applyTuple4(param, fn) {
  return Curry._4(fn, param[0], param[1], param[2], param[3]);
}

function applyTuple5(param, fn) {
  return Curry._5(fn, param[0], param[1], param[2], param[3], param[4]);
}

function applyTuple6(param, fn) {
  return Curry._6(fn, param[0], param[1], param[2], param[3], param[4], param[5]);
}

function applyTuple7(param, fn) {
  return Curry._7(fn, param[0], param[1], param[2], param[3], param[4], param[5], param[6]);
}

function applyTuple8(param, fn) {
  return Curry._8(fn, param[0], param[1], param[2], param[3], param[4], param[5], param[6], param[7]);
}

function applyTuple9(param, fn) {
  return Curry.app(fn, [
              param[0],
              param[1],
              param[2],
              param[3],
              param[4],
              param[5],
              param[6],
              param[7],
              param[8]
            ]);
}

function applyTuple10(param, fn) {
  return Curry.app(fn, [
              param[0],
              param[1],
              param[2],
              param[3],
              param[4],
              param[5],
              param[6],
              param[7],
              param[8],
              param[9]
            ]);
}

function Impl($star) {
  var withArity = function (arity) {
    return /* () */0;
  };
  return /* module */[/* withArity */withArity];
}

function withArity(arity) {
  return /* () */0;
}

var standardHash = Hashtbl.hash;

exports.standardHash = standardHash;
exports.standardEqual = standardEqual;
exports.applyTuple1 = applyTuple1;
exports.applyTuple2 = applyTuple2;
exports.applyTuple3 = applyTuple3;
exports.applyTuple4 = applyTuple4;
exports.applyTuple5 = applyTuple5;
exports.applyTuple6 = applyTuple6;
exports.applyTuple7 = applyTuple7;
exports.applyTuple8 = applyTuple8;
exports.applyTuple9 = applyTuple9;
exports.applyTuple10 = applyTuple10;
exports.Impl = Impl;
exports.withArity = withArity;
/* No side effect */
