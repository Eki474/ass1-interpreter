#include "exp.h"

Exp::Exp(Node r)
{}

LuaValue* Exp::consume()
{
	//std::cout << "exp" << std::endl;
	return children.front()->consume();
}