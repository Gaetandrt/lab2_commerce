# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Iincludes -Wall -Wextra -std=c++11 -g -O0

# Source and include directories
SRC_DIR = src
INCLUDE_DIR = include

# Find all .cpp files in the src directory
SRCS = $(shell find $(SRC_DIR) -name '*.cpp')

# Generate object files from source files
OBJS = $(SRCS:.cpp=.o)

# Output executable
TARGET = main

# Default target
all: $(TARGET)

# Link object files to create the executable
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)
	rm -f $(OBJS)

# Compile .cpp files to .o files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET)

re: clean all

# Phony targets
.PHONY: all clean