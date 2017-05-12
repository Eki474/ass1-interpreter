#include <iostream>
#include <stdio.h>
#include <sstream>
#include <list>
#include <fstream>
#include "binary.tab.hh"

#ifndef NODE_H
#define NODE_H 
#include "Node.h"
#endif
extern Node root;
extern "C" FILE* yyin;
#include "statement.h"
#include "functioncall.h"
#include "functname.h"
#include "args.h"
#include "exp.h"
#include "binopPlus.h"
#include "binopMinus.h"
#include "binopMult.h"
#include "binopDiv.h"
#include "number.h"
Statement* graph;

void yy::parser::error(std::string const&err)
{
	std::cout << "It's one of the bad ones... " << err << std::endl;
}

Statement* evaluate(Node n)
{
	if(n.tag == "stmt")
		return new Statement(n);
	if(n.tag == "functioncall")
		return new Functioncall(n);
	if(n.tag == "name")
		return new FunctName(n);
	if(n.tag == "args")
		return new Args(n);
	if(n.tag == "exp")
		return new Exp(n);
	if(n.tag == "binop" && n.value == "+")
		return new BinopPlus(n);
	if(n.tag == "binop" && n.value == "/")
		return new BinopDiv(n);
	if(n.tag == "binop" && n.value == "*")
		return new BinopMult(n);
	if(n.tag == "binop" && n.value == "-")
		return new BinopMinus(n);
	if(n.tag == "number")
		return new Number(n);
	return new Statement(n);
}

void buildTree(Statement* s, Node n)
{
	if(!n.children.empty())
	{
		for(Node i : n.children)
		{
			s->addChildren(evaluate(i));
			buildTree(s->getChildren().back(), i);

			/*Statement* j = evaluate(i);
			std::cout << i.tag << " : " << typeid(*j).name() << std::endl;
			buildTree(j, i);
			s->addChildren(j);*/
		}
	}
}

int main(int argc, char **argv)
{
	if(argc == 2){
		//std::ifstream src (argv[1], std::ifstream::in); 
		yyin = fopen(argv[1], "r"); 
		yy::parser parser;
		//parser.set_debug_level(1);
		//yyin = src; //test
		//yy::parser::yyin(src);
		if(!parser.parse()){
			std::ofstream myfile ("parse.txt", std::ofstream::out);
			if (myfile.is_open()){
				myfile << "digraph{\n";
				root.tree(myfile);
				myfile << "}";
				myfile.close();
			}else std::cout << "error with parsing output file" << std::endl;
			fclose(yyin);
		}else std::cout << "error with lua file" << std::endl; 

		graph = evaluate(root);
		//Statement start = graph;
		buildTree(graph, root);
		//graph.displayChildren(graph);
		graph->consume();
	}
	return 0;
}


