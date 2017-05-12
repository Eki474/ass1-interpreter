#include "functname.h"

FunctName::FunctName(Node r)
: name(new LuaString(r.value))
{
	//std::cout << "function name constructor" << std::endl;
	//name = LuaString(r.value);
}

LuaValue* FunctName::consume()
{
	//std::cout << "funcname: " << name->attributeString << std::endl;
	if(name->attributeString == "print")
		std::cout << children.front()->consume()->attributeInt << std::endl;
	return new LuaString(name->attributeString);
}