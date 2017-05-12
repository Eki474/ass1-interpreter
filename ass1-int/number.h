#ifndef NUMBER_H
#define NUMBER_H

#include "Node.h"
#include <list>
#include "statement.h"
#include "LuaInt.h"
#include "LuaValue.h"

class Number : public Statement 
{	
private:
	LuaInt* value;
public:
	Number(Node r);
	LuaValue* consume();
};

#endif