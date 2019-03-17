CC = gcc
GLFWFLAGS = -lglfw -framework Cocoa -framework OpenGL

all: main

run: main
	./main

main: main.o window.o
	$(CC) -o main main.o window.o $(GLFWFLAGS)

window.o: window.c window.h
	$(CC) -c window.c

clean:
	$(RM) main *.o *~
