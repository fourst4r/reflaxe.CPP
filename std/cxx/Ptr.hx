package cxx;

@:cxxStd
@:arrowAccess
@:overrideMemoryManagement
@:unsafePtrType
@:forward
extern abstract Ptr<T>(T) from T to T from Value<T> {
	@:nativeFunctionCode("std::string({this})")
	@:include("string", true)
	public function toString(): String;

	@:nativeFunctionCode("{this} == nullptr")
	public function isNull(): Bool;

	@:nativeFunctionCode("{this} == {arg1}")
	public function equals<U>(other: cxx.Ptr<U>): Bool;

	@:nativeFunctionCode("{this} != {arg1}")
	public function notEquals<U>(other: cxx.Ptr<U>): Bool;

	@:nativeFunctionCode("({this}++)")
	public function increment(): Void;

	@:nativeFunctionCode("({this}--)")
	public function decrement(): Void;

	@:nativeFunctionCode("(*{this})")
	public function toValue(): cxx.Value<T>;
}
