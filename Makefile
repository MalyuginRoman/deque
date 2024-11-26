all:
	g++ -std=c++17 main.cpp CommandMove.cpp CommandRotate.cpp -o exception
test:
	chmod +x exception
clean:
	$(RM) exception
