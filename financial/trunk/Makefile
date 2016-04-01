OBJS = ./build/
SRC = ./src/
DATA = ./data/
CC = g++

all:
	rm -rf $(OBJS)
	mkdir $(OBJS)
	make main

new_data:
	rm $(DATA)quote*
	wget --input $(DATA)stocks.txt --directory-prefix=$(DATA)


main: $(SRC)main.cpp
	$(CC) $(SRC)main.cpp $(SRC)Stock.cpp $(SRC)StockList.cpp -o $(OBJS)main

clean:
	rm -rf $(OBJS)

