#include "binopMinus.h"

BinopMinus::BinopMinus(Node r)
{}

LuaValue* BinopMinus::consume()
{
	auto a = children.front()->consume();
	auto b = children.back()->consume();
	//std::cout << "minus : " << typeid(*a).name() << " - " << typeid(*b).name() << std::endl;
	int rslt = a->attributeInt - b->attributeInt;
	//std::cout << "- " << rslt << std::endl;
	return new LuaInt(rslt);
}