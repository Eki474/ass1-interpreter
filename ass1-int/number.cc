#include "number.h"

Number::Number(Node r)
: value(new LuaInt(std::stoi(r.value)))
{
	//size_t s = r.value.length();
	//int val = std::stoi(r.value, &s);
	//value = LuaInt(val);
}

LuaValue* Number::consume()
{
	//std::cout << "number: " << value->attributeInt << std::endl;
	return new LuaInt(value->attributeInt);
}