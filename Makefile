makefile:
.DEFAULT_GOAL := all
CC=g++
DEBUG_FLAGS=-g
COMPILE_FLAGS=-I ./src -std=c++11

all: clean testrequired testgroup1 testgroup2 testgroup3

clean:
	rm -rf required group1 group2 group3 test_group1.o test_main.o test_required.o test_group2.o test_group3.o Book.o

testrequired: required
	./required

testgroup1: group1
	./group1

testgroup2: group2
	./group2

testgroup3: group3
	./group3

group3: test_main.o test_group3.o
	$(CC) $(DEBUG_FLAGS) -o group3 test_main.o test_group3.o

group2: test_main.o test_group2.o
	$(CC) $(DEBUG_FLAGS) -o group2 test_main.o test_group2.o

group1: test_main.o test_group1.o
	$(CC) $(DEBUG_FLAGS) -o group1 test_main.o test_group1.o

required: Book.o test_main.o test_required.o
	$(CC) $(DEBUG_FLAGS) -o required Book.o test_main.o test_required.o

test_required.o: test/test_required.cpp
	$(CC) -c $(DEBUG_FLAGS) $(COMPILE_FLAGS) test/test_required.cpp

test_main.o: test/test_main.cpp
	$(CC) -c $(DEBUG_FLAGS) $(COMPILE_FLAGS) test/test_main.cpp

Book.o: test/book/Book.cpp
	$(CC) -c $(DEBUG_FLAGS) $(COMPILE_FLAGS) test/book/Book.cpp

test_group1.o: test/test_group1.cpp
	$(CC) -c $(DEBUG_FLAGS) $(COMPILE_FLAGS) test/test_group1.cpp

test_group2.o: test/test_group2.cpp
	$(CC) -c $(DEBUG_FLAGS) $(COMPILE_FLAGS) test/test_group2.cpp

test_group3.o: test/test_group3.cpp
	$(CC) -c $(DEBUG_FLAGS) $(COMPILE_FLAGS) test/test_group3.cpp