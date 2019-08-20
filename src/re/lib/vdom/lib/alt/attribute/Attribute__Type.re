type t =

  // Event handler attributes (Note: these are handled differently -- instead of
  // passing a string as the attribute value, we passing a function in memory
  // to an event management algorithm):

  | OnClick(Virtual_Event_Type.t => unit)
  | OnMouseOver(Virtual_Event_Type.t => unit)

  // Define a custom attribute -- Since HTML allows for any kind of attribute
  // to be set on any element (regardless of validity or function, this behavior
  // may be represented here:

  | CustomAttribute(string, string)

  // Standard HTML attributes:

  |	Accept(string)
  |	Accept_CharSet(string)
  |	AccessKey(string)
  |	Action(string)
  |	Align(string)
  |	Allow(string)
  |	Alt(string)
  |	Async(string)
  |	AutoCapitalize(string)
  |	AutoComplete(string)
  |	AutoFocus(string)
  |	AutoPlay(string)
  |	Background(string)
  |	BgColor(string)
  |	Border(string)
  |	Buffered(string)
  |	Challenge(string)
  |	CharSet(string)
  |	Checked(string)
  |	Cite(string)
  |	Class(string)
  |	Code(string)
  |	Codebase(string)
  |	Color(string)
  |	Cols(string)
  |	ColSpan(string)
  |	Content(string)
  |	ContentEditable(string)
  |	ContextMenu(string)
  |	Controls(string)
  |	Coords(string)
  |	Crossorigin(string)
  |	Csp(string)
  |	Data(string)
  |	Data_(string)
  |	DateTime(string)
  |	Decoding(string)
  |	Default(string)
  |	Defer(string)
  |	Dir(string)
  |	DirName(string)
  |	Disabled(string)
  |	Download(string)
  |	Draggable(string)
  |	Dropzone(string)
  |	EncType(string)
  |	EnterKeyHint(string)
  |	For(string)
  |	Form(string)
  |	FormAction(string)
  |	FormEncType(string)
  |	FormMethod(string)
  |	FormNoValidate(string)
  |	FormTarget(string)
  |	Headers(string)
  |	Height(string)
  |	Hidden(string)
  |	High(string)
  |	Href(string)
  |	HrefLang(string)
  |	Http_Equiv(string)
  |	Icon(string)
  |	Id(string)
  |	Importance(string)
  |	Integrity(string)
  |	IntrinsicSize(string)
  |	InputMode(string)
  |	IsMap(string)
  |	ItemProp(string)
  |	KeyType(string)
  |	Kind(string)
  |	Label(string)
  |	Lang(string)
  |	Language(string)
  |	Loading(string)
  |	List(string)
  |	Loop(string)
  |	Low(string)
  |	Manifest(string)
  |	Max(string)
  |	MaxLength(string)
  |	MinLength(string)
  |	Media(string)
  |	Method(string)
  |	Min(string)
  |	Multiple(string)
  |	Muted(string)
  |	Name(string)
  |	NoValidate(string)
  |	Open(string)
  |	Optimum(string)
  |	Pattern(string)
  |	Ping(string)
  |	Placeholder(string)
  |	Poster(string)
  |	Preload(string)
  |	RadioGroup(string)
  |	ReadOnly(string)
  |	ReferrerPolicy(string)
  |	Rel(string)
  |	Required(string)
  |	Reversed(string)
  |	Rows(string)
  |	RowSpan(string)
  |	Sandbox(string)
  |	Scope(string)
  |	Scoped(string)
  |	Selected(string)
  |	Shape(string)
  |	Size(string)
  |	Sizes(string)
  |	Slot(string)
  |	Span(string)
  |	SpellCheck(string)
  |	Src(string)
  |	SrcDoc(string)
  |	SrcLang(string)
  |	SrcSet(string)
  |	Start(string)
  |	Step(string)
  |	Style(string)
  |	Summary(string)
  |	TabIndex(string)
  |	Target(string)
  |	Title(string)
  |	Translate(string)
  |	Type(string)
  |	UseMap(string)
  |	Value(string)
  |	Width(string)
  |	Wrap(string)
  ;

