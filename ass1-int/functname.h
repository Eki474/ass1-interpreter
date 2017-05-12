#ifndef FUNCTNAME_H
#define FUNCTNAME_H

#include "Node.h"
#include <list>
#include "statement.h"
#include "LuaString.h"
#include "LuaValue.h"
#include <string>
#include <iostream>

class FunctName : public Statement 
{	
private:
	LuaString* name;
public:
	FunctName(Node r);
	LuaValue* consume();
};

#endif