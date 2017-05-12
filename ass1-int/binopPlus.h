#ifndef BINOPPLUS_H
#define BINOPPLUS_H

#include "Node.h"
#include <list>
#include "statement.h"
#include "LuaInt.h"
#include "LuaValue.h"

class BinopPlus : public Statement 
{	
public:
	BinopPlus(Node r);
	LuaValue* consume();
};

#endif