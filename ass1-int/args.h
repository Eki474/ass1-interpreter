#ifndef ARGS_H
#define ARGS_H

#include "Node.h"
#include <list>
#include "statement.h"
#include "LuaEmpty.h"
#include "LuaValue.h"

class Args : public Statement 
{	
public:
	Args(Node r);
	LuaValue* consume();
};

#endif