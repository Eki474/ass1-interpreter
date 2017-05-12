#ifndef FUNCTIONCALL_H
#define FUNCTIONCALL_H

#include "Node.h"
#include <list>
#include "statement.h"
#include "LuaEmpty.h"
#include "LuaValue.h"


class Functioncall : public Statement 
{	
public:
	Functioncall(Node r);
	LuaValue* consume();
};

#endif