.DEFAULT_GOAL := all
CFLAGS= -Wall -pedantic -std=c++11

all: alltests

#execute BSTLEAF test
alltests: test/test_required
	./test/test_required

#Build catch
test/test_main.o: test/test_main.cpp
	g++ $(CFLAGS) test/test_main.cpp -c -o test/test_main.o

#Build book
test/Book.o:
	g++ $(CFLAGS) test/book/Book.cpp -c -o test/Book.o

#Build BSTLEAF
test/test_required: test/test_main.o test/Book.o test/test_required.cpp
	g++ $(CFLAGS) test/test_main.o test/Book.o test/test_required.cpp -o test/test_required

#Clean
clean:
	rm -rf test/test_main.o test/Book.o test/test_required