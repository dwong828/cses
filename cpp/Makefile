# Variables to make life easier
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++20
TARGET = mytest
SRC = main.cpp

# The default action when you type 'make'
all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

# A 'clean' rule to remove the executable
clean:
	rm -f $(TARGET)

# A 'test' rule to compile and run immediately
test: $(TARGET)
	./$(TARGET)
