CONDICIONS = -D_JUDGE_ -D_GLIBCXX_DEBUG -ansi -O2 -Wall -Wextra -Wno-uninitialized -Wno-sign-compare -std=c++0x

program.exe: program.o CuaIOParInt.o ParInt.o
	g++ -o program.exe program.o CuaIOParInt.o ParInt.o

ParInt.o:  ParInt.cc ParInt.hh 
	g++ -c ParInt.cc $(CONDICIONS)
	
CuaIOParInt.o: CuaIOParInt.cc CuaIOParInt.hh
	g++ -c CuaIOParInt.cc $(CONDICIONS)
	
program.o: program.cc
	g++ -c program.cc $(CONDICIONS)
	
clean:
	rm *.o
	rm *.exe
