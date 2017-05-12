#ifndef EXP_H
#define EXP_H

#include "Node.h"
#include <list>
#include "statement.h"
#include "LuaInt.h"
#include "LuaValue.h"

class Exp : public Statement 
{	
public:
	Exp(Node r);
	LuaValue* consume();
};

#endif