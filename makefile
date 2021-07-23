run: MultiplyGame
	./MultiplyGame

MultiplyGame: MultiplyGame.cpp
	g++ -std=c++17 MultiplyGame.cpp -o MultiplyGame