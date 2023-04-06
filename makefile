OBJECTS = Circle.o ShapeManager.o main.o Square.o
CC = clang++
VPATH = source include
INCLUDES = -I include
CFLAGS = -std=c++11
PROGRAM_NAME = circle 
# make target
all: $(OBJECTS)
	$(CC) -o ${PROGRAM_NAME} $(OBJECTS)
# dependence
%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -c $<
# make clean
clean: 
	rm -f *.o circle
