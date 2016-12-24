SRC = *.cpp
HEADERS = *.h

# Compiler
CXX = g++

# Compiler Flags
# -w is to supress all warnings
COMPILER_FLAGS = -w -std=c++11

INCLUDE_PATHS = "./include/"
LINKER_PATHS = ""
LINKER_FLAGS = 

OBJ_NAME = exec

all: $(SRC)
	$(CXX) $(COMPILER_FLAGS) $(SRC) $(HEADERS) -o $(OBJ_NAME)

# This is for single file programs only
sf: $(SRC)
	$(CXX) $(COMPILER_FLAGS) $(SRC) -o $(OBJ_NAME)


clean:
	-rm $(OBJ_NAME) 

