DEBUG = ./debug/
SRC = ./src/
DATA = ./data/
CC = g++

all:
	rm -rf $(DEBUG)
	mkdir $(DEBUG)
	make main

main: $(SRC)main.cpp
	$(CC) $(SRC)main.cpp $(SRC)Menu.cpp $(SRC)Stock.cpp $(SRC)StockList.cpp -o $(DEBUG)main

clean:
	rm -rf $(DEBUG)
