make:
	g++ -std=c++17 *.cpp -o main

run:
	make
	./main
	make clean

clean:
	rm ./main

compress:
	tar -cvz makefile *.cpp -f output.tar

tarmac:
	tar -czf output.tar makefile *.cpp
