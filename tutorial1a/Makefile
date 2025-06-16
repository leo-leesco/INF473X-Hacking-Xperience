LANGUAGE=FRENCH
all: hello-world international-hello-world

hello-world: hello-world.o
    cc -g -o hello-world hello-world.o

hello-world.o: hello-world.c
    cc -c -Wall -g hello-world.c

international-hello-world: international-hello-world.o
    cc -g -o international-hello-world international-hello-world.o

international-hello-world.o: international-hello-world.c
    cc -c -Wall -g international-hello-world.c -D$(LANGUAGE)

clean:
    rm hello-world.o hello-world
    rm international-hello-world.o international-hello-world
