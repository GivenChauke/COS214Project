CXXFLAGS = -std=c++17 -w  # Suppress all warnings

main: *.cpp
	g++ $(CXXFLAGS) *.cpp -o main

run: main
	./main

clean:
	rm ./main

compress:
	tar -cvz makefile *.cpp -f output.tar

tarmac:
	tar -czf output.tar makefile *.cpp
