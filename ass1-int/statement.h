#ifndef STATEMENT_H
#define STATEMENT_H

#include "Node.h"
#include "LuaEmpty.h"
#include "LuaValue.h"
#include <list>
#include <typeinfo>

class Statement 
{	
protected:
	std::list<Statement*> children;
public:
	Statement();
	Statement(Node r);
	virtual LuaValue* consume()
	{
		//std::cout << "statement " << children.size() << std::endl;
		for(auto s : children)
			s->consume();
		return new LuaEmpty();
	}
	void addChildren(Statement* s);
	std::list<Statement*> getChildren();
};

#endif