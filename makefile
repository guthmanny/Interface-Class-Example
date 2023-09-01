TARGET = shapeExample
LIB = libshape.a
CC = g++
INC_DIRS = ./include
SRC_DIRS = ./source
LIB_DIRS = ./lib
BUILD_DIRS = ./build
SRC = $(wildcard $(SRC_DIRS)/*.cpp)
INCLUDE = -I $(INC_DIRS)
CXXFLAGS = -std=c++11
OBJS = $(notdir $(patsubst %.cpp,%.o,$(SRC)))

#echo_test:
#	@echo $(INCLUDE)

# make target
$(TARGET): $(OBJS) 
	${CC}   $(OBJS) -o $(BUILD_DIRS)/$@

# dependence
%.o: $(SRC_DIRS)/%.cpp
	$(CC) $(CXXFLAGS) $(INCLUDE) -c $< -o $@

# make clean
.PHONY: clean
clean: 
	rm -f *.o