all: MultiplyGame run clean
	
run: MultiplyGame
	./MultiplyGame

MultiplyGame:
	g++ -g -std=c++17 MultiplyGame.cpp -o MultiplyGame

clean:
	rm MultiplyGame