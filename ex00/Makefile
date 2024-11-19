# Define the compiler and the flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Name of the output binary
NAME = megaphone

# Source and object files
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

# Rule to compile the program
all: $(NAME)

# Rule to create the binary from the object file
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

# Rule to create object files from source files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to clean the object files
clean:
	rm -f $(OBJ)

# Rule to clean all generated files (object files and binary)
fclean: clean
	rm -f $(NAME)

# Rule to recompile the project
re: fclean all

.PHONY: all clean fclean re
