NAME = ScavTrap

SRCS = ClapTrap.cpp ScavTrap.cpp main_jeu.cpp
OBJ_DIR = obj
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(OBJ_DIR):
	@echo "Creating object directory..."
	@mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ_DIR) $(OBJS)
	@$(CXX) $(OBJS) -o $(NAME)
	@echo "$(NAME) created successfully!"

$(OBJ_DIR)/%.o: %.cpp
	@echo "Compiling $<..."
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo "Cleaning all the files..."
	@rm -f $(NAME)
	@echo "Clean complete!"

re: fclean all

.PHONY: all clean fclean re
