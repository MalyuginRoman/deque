all:
	g++ -std=c++17 main.cpp -o exception
test:
	chmod +x exception
clean:
	$(RM) exception
