# Define the compiler and the flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Name of the output binary
NAME = megaphone

# Rule to compile the program
all: $(NAME)

# Rule to create the binary from the source file
$(NAME): megaphone.cpp
	$(CXX) $(CXXFLAGS) -o $(NAME) megaphone.cpp

# Rule to clean the compiled files
clean:
	rm -f $(NAME)

# Rule to clean all generated files
fclean: clean

# Rule to recompile the project
re: fclean all

.PHONY: all clean fclean re
