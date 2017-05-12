#include "binopPlus.h"

BinopPlus::BinopPlus(Node r)
{}

LuaValue* BinopPlus::consume()
{
	int rslt =  children.front()->consume()->attributeInt + children.back()->consume()->attributeInt;
	//std::cout << "+ " << rslt << std::endl;
	return new LuaInt(rslt);
}