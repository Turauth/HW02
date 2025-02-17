# Deine the compiler.
CXX = gcc

# Define the compiler flags.
CXXFLAGS = -Wall -std=c++17

# Define the target executable.
TARGET = hw2

# Define the source files.
SRCS = hw2.cpp date.cpp person.cpp student.cpp teacher.cpp

#Define the object files.
OBJS = $(SRCS:.cpp=.o)

# Rule to build the target executable.
$(TARGET): $(OBJS)
    $(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule to build object files.
%.o %.cpp
    $(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build files
clean:
    rm -f $ (OBJS) # $(TARGET)