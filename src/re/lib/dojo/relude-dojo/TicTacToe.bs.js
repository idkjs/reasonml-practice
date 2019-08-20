// Generated by BUCKLESCRIPT VERSION 5.0.4, PLEASE EDIT WITH CARE
'use strict';

var Block = require("bs-platform/lib/js/block.js");
var Random = require("bs-platform/lib/js/random.js");
var Relude_IO = require("relude/src/Relude_IO.bs.js");
var GlobalInterface$Practice = require("../../global-interface/GlobalInterface.bs.js");

var Tile = /* module */[];

function empty(param) {
  return /* record */[
          /* a1 : tuple */[
            /* A1 */0,
            /* Empty */0
          ],
          /* a2 : tuple */[
            /* A2 */1,
            /* Empty */0
          ],
          /* a3 : tuple */[
            /* A3 */2,
            /* Empty */0
          ],
          /* b1 : tuple */[
            /* B1 */3,
            /* Empty */0
          ],
          /* b2 : tuple */[
            /* B2 */4,
            /* Empty */0
          ],
          /* b3 : tuple */[
            /* B3 */5,
            /* Empty */0
          ],
          /* c1 : tuple */[
            /* C1 */6,
            /* Empty */0
          ],
          /* c2 : tuple */[
            /* C2 */7,
            /* Empty */0
          ],
          /* c3 : tuple */[
            /* C3 */8,
            /* Empty */0
          ]
        ];
}

function make(board) {
  return /* record */[
          /* a1 */board[/* a1 */0],
          /* a2 */board[/* a2 */1],
          /* a3 */board[/* a3 */2],
          /* b1 */board[/* b1 */3],
          /* b2 */board[/* b2 */4],
          /* b3 */board[/* b3 */5],
          /* c1 */board[/* c1 */6],
          /* c2 */board[/* c2 */7],
          /* c3 */board[/* c3 */8]
        ];
}

var include = GlobalInterface$Practice.SHOW[/* Default */0](/* module */[]);

var Board_002 = /* show */include[0];

var Board = /* module */[
  /* empty */empty,
  /* make */make,
  Board_002
];

function Impl(T) {
  return /* module */[];
}

function Make(T) {
  return /* module */[];
}

var UserInterface = /* module */[
  /* Impl */Impl,
  /* Make */Make
];

function newGame(param) {
  Random.self_init(/* () */0);
  var match = Random.bool(/* () */0) === true;
  var randomTurn = match ? /* PlayerX */0 : /* PlayerO */1;
  return /* record */[
          /* data */empty(/* () */0),
          /* userInterface : () */0,
          /* gameStatus : InProgress */Block.__(0, [randomTurn])
        ];
}

var include$1 = GlobalInterface$Practice.SHOW[/* Default */0](/* module */[]);

var Game_001 = /* show */include$1[0];

var Game = /* module */[
  /* newGame */newGame,
  Game_001
];

var TicTacToe = /* module */[
  /* Tile */0,
  /* Board */0,
  /* UserInterface */0,
  /* Game */0
];

var main = Relude_IO.bitap((function (prim) {
        console.log(prim);
        return /* () */0;
      }), (function (prim) {
        console.log(prim);
        return /* () */0;
      }), Relude_IO.suspendWithVoid(newGame));

var HtmlInterface = 0;

exports.Tile = Tile;
exports.Board = Board;
exports.HtmlInterface = HtmlInterface;
exports.UserInterface = UserInterface;
exports.Game = Game;
exports.TicTacToe = TicTacToe;
exports.main = main;
/* include Not a pure module */
