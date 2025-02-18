CC = g++
CFLAGS = -std=c++11 -O2 -Wall
SRC = main.cpp system.cpp disk.cpp
EXEC = disksim


all: 
	$(CC) $(CFLAGS) $(SRC) -o $(EXEC)

clean:
	rm -f $(EXEC)
