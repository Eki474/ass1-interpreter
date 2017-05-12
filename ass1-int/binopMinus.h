#ifndef BINOPMINUS_H
#define BINOPMINUS_H

#include "Node.h"
#include <list>
#include "statement.h"
#include "LuaInt.h"
#include "LuaValue.h"

class BinopMinus : public Statement 
{	
public:
	BinopMinus(Node r);
	LuaValue* consume();
};

#endif