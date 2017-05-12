#ifndef BINOPMULT_H
#define BINOPMULT_H

#include "Node.h"
#include <list>
#include "statement.h"
#include "LuaInt.h"
#include "LuaValue.h"

class BinopMult : public Statement
{	
public:
	BinopMult(Node r);
	LuaValue* consume();
};

#endif