
main: main.cpp HelloWorld.o HelloWorldImpl.o
	g++ -o main main.cpp HelloWorld.o HelloWorldImpl.o

HelloWorld.o: HelloWorld.cpp
	g++ -c HelloWorld.cpp

HelloWorldImpl.o: HelloWorldImpl.cpp
	g++ -c HelloWorldImpl.cpp

clean: 
	rm *.o
