myStack: main.o stack.o doublylinkedlist.o
        g++  -o myStack  main.o stack.o doublylinkedlist.o

main.o: main.cpp
        g++  -c main.cpp

stack.o: stack.cpp stack.h
        g++  -c stack.cpp

doublylinkedlist.o: doublylinkedlist.cpp doublylinkedlist.h
        g++ -c doublylinkedlist.cpp

clean:
        rm -f myStack *.o *~

