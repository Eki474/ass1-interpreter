#include "binopDiv.h"

BinopDiv::BinopDiv(Node r)
{}

LuaValue* BinopDiv::consume()
{
	auto a = children.front()->consume();
	auto b = children.back()->consume();
	//std::cout << "div : " << a->attributeInt << " " << typeid(*a).name() << " / " << b->attributeInt << " " << typeid(*b).name() << std::endl;
	int rslt = a->attributeInt / b->attributeInt;
	//int rslt = children.front()->consume()->attributeInt / children.back()->consume()->attributeInt;
	//std::cout << "/ " << rslt << std::endl;
	return new LuaInt(rslt);
}