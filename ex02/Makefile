
NAME = phonebook

SRC = tests.cpp Account.cpp

OBJ = $(addprefix obj/,$(SRC:%.cpp=%.o))

DEP = $(OBJ:%.o=%.d)

OBJ_DIR = ./obj

WWW = -Wall -Wextra -Werror -std=c++98

.PHONY: all clean fclean re

all: $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ_DIR) $(OBJ)
	c++ $(WWW) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

-include $(DEP)

$(OBJ_DIR)/%.o: %.cpp
	c++ $(WWW) -MMD -c $< -o $@

re: fclean all
