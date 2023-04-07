TARGET = shapeExample
CC = clang++
INC_DIRS = ./include
SRC_DIRS = ./source
SRC = $(wildcard $(SRC_DIRS)/*.cpp)
INCLUDE = -I $(INC_DIRS)
CXXFLAGS = -std=c++11
OBJS = $(notdir $(patsubst %.cpp,%.o,$(SRC)))

#echo_test:
#	@echo $(INCLUDE)

# make target
all: $(OBJS)
	$(CC) -o ${TARGET} $(OBJS)

# dependence
%.o: $(SRC_DIRS)/%.cpp
	$(CC) $(CXXFLAGS) $(INCLUDE) -c $< -o $@

# make clean
clean: 
	rm -f *.o $(TARGET)
