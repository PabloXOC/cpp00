# Compiler
CXX = c++

# Compiler Flags
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Targets
TARGET = tests
SOURCES = Account.cpp tests.cpp
OBJECTS = $(SOURCES:.cpp=.o)

# Build the main executable
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Compile source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJECTS) $(TARGET)

# Rebuild everything
re: clean $(TARGET)
