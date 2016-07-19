# OBJS specifies which files to compile as part of the project
SRC = *.cpp
INC = *.h

# CXX specifies which compiler we are using
CXX = c++

#COMPILER_FLAGS specifies the additional compilation options we are using
#-w suppress all warning
COMPILER_FLAGS = -w -std=c++11

#INCLUDE_PATHS
INCLUDE_PATHS = ""

#LINKER_PATHS
LINKER_PATHS = ""

# LINKER_FLAGS specifies the libraries that we are linking against
LINKER_FLAGS =

# OBJ_NAME specifies the name of our executable
OBJ_NAME = Program

# This is where we make the target
all: $(OBJS)
	-mkdir ./bin/
	$(CXX) $(COMPILER_FLAGS) ./src/$(SRC) ./include/$(INC) -o ./bin/$(OBJ_NAME)

clean:
	-rm -r ./bin/
