CC=g++
CCFLAGS=Wall -g
LDFLAGS= -fPIC -shared
TASKPATH=.
OBJECTS=memlib.o mm.o

all:init libmm.so test
	cp -rf libmm.so $(TASKPATH)/lib
init:
	mkdir -p $(TASKPATH)/task
	mkdir -p $(TASKPATH)/lib
test:test.c
	cc -o test test.c -L. -lmm
libmm.so:$(OBJECTS)
	$(CC) $(OBJECTS) $(LDFLAGS) -o libmm.so
memlib.o:memlib.c memlib.h config.h
	cc -c memlib.c
mm.o:mm.c mm.h csapp.h
	cc -c mm.c

.PHONY:clean
clean:
	rm -rf $(objects) 
	rm -rf test.o
