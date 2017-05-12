#ifndef BINOPDIV_H
#define BINOPDIV_H

#include "Node.h"
#include <list>
#include "statement.h"
#include "LuaInt.h"
#include "LuaValue.h"

class BinopDiv : public Statement 
{	
public:
	BinopDiv(Node r);
	LuaValue* consume();
};

#endif