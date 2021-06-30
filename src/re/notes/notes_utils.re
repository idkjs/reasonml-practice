type incomplete_note = {mutable text: string};

type complete_note = {
  mutable text: string,
  id: string
};

let noteFromJson = (json) : complete_note =>{
  // open Json.Decode;
  Json.Decode.{id: json |> field("id", string), text: json |> field("text", string)};}

let notesFromJson = (json) : list(complete_note) => json |> Json.Decode.list(noteFromJson);

let notesToJson = (notes) : string =>
  notes
  |> Array.of_list
  |> Array.map(
       ({id, text}) =>
         Js.Dict.fromList([("text", Js.Json.string(text)), ("id", Js.Json.string(id))])
     )
  |> Js.Json.objectArray
  |> Js.Json.stringify;
