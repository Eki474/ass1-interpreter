#include "binopMult.h"

BinopMult::BinopMult(Node r)
{}

LuaValue* BinopMult::consume()
{
	int rslt = children.front()->consume()->attributeInt * children.back()->consume()->attributeInt;
	//std::cout << "* " << rslt << std::endl;
	return new LuaInt(rslt);
}