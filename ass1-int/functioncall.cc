#include "functioncall.h"

Functioncall::Functioncall(Node r)
{}

LuaValue* Functioncall::consume()
{
	//std::cout << "functcall" << std::endl;
	return children.front()->consume();
}