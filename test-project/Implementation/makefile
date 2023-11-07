make:
		g++ -c -std=c++17 Pizza/*.cpp Burger/*.cpp Pasta/*.cpp *.cpp
		g++ -o main -std=c++17 *.o

run:
	make
	./main
	make clean

macrun:
	g++-11 -std=c++17 -g *.cpp -o main
	./main
	make clean

clean:
	rm -f ./main

full-clean:
	rm -f *.o *.tar main

clean-o:
	rm -f *.o