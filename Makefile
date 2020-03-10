# Makefile
tetris.o: tetris.cpp 
	g++ -o tetris tetris.cpp -lncurses
