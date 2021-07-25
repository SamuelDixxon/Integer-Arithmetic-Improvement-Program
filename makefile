all: MultiplyGame
	
run: MultiplyGame
	./MultiplyGame

MultiplyGame:
	g++ -g -std=c++11 -c MultiplyGame.cpp -o MultiplyGame