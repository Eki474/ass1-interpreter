int: lex.yy.c binary.tab.o main.cc Node.h
	g++ -std=c++11 -g -oint binary.tab.o lex.yy.c main.cc Node.cc statement.cc functioncall.cc args.cc binopDiv.cc binopMinus.cc binopMult.cc binopPlus.cc exp.cc functname.cc number.cc LuaEmpty.cc LuaInt.cc LuaString.cc LuaValue.h
binary.tab.o: binary.tab.cc
	g++ -std=c++11 -g -c binary.tab.cc
binary.tab.cc: binary.yy 
	bison binary.yy 
lex.yy.c: binary.ll binary.tab.cc 
	flex binary.ll
clean:
	rm -f binary.tab.* lex.yy.c* int 