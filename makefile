a.out: parser.o
	g++ parser.o

parser.o: parser.cpp
	g++ -c parser.cpp

clean:
	rm *.o a.out

run:
	./a.out ./OutputAndTestCases/TestCases10_08_22/23ArrayHardest