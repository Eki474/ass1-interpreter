#include "args.h"

Args::Args(Node r)
{}

LuaValue* Args::consume()
{
	//std::cout << "args" << std::endl;
	return children.front()->consume();
}