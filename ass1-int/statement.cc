#include "statement.h"

Statement::Statement() 
{
	//std::cout << "default constructor called" << std::endl;
}

Statement::Statement(Node r)
{}

void Statement::addChildren(Statement* s)
{
	children.push_back(s);
}

std::list<Statement*> Statement::getChildren()
{
	return children;
}