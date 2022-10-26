a.out: parser.o
	g++ parser.o

parser.o: parser.cpp
	g++ -c parser.cpp

build:
	g++ -std=c++11 *.cpp

clean:
	rm *.o a.out

run:
	./a.out ./OutputAndTestCases/TestCases10_08_22/99Sample