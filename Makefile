all:
	g++ -Wall -Wextra -std=c++11 -Iinclude src/main.cpp src/DynamicArray.cpp -o main.exe

run:
	./main.exe

clean:
	rm -f main.exe
