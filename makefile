# Makefile entries are arranged as sets of targets to build, dependencies
# required to build that target, and the system command to build the target:
#
# target: dependencies
# [tab] system_command
#
# We can also use variables in our makefile, to make it easier to change
# compilers, or compilation flags.  The variable values are substituted
# wherever you see the $(VARIABLE) in the makefile
CC=g++ -std=c++11
CFLAGS=-c -g -Wall

all: driver

driver: main.o queue_test.o queue.o node.o
	$(CC) main.o queue_test.o queue.o node.o -g -o driver

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

queue_test.o: queue_test.cpp
	$(CC) $(CFLAGS) queue_test.cpp

queue.o: queue.cpp queue.h
	$(CC) $(CFLAGS) queue.cpp

node.o: node.cpp node.h
	$(CC) $(CFLAGS) node.cpp

clean:
	rm *.o driver