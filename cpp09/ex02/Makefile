# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jole <jole@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/10 15:06:54 by jole              #+#    #+#              #
#    Updated: 2024/04/10 15:52:52 by jole             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

SRC = main.cpp PmergeME.cpp

OBJ = $(addprefix obj/,$(SRC:%.cpp=%.o))

DEP = $(OBJ:%.o=%.d)

OBJ_DIR = ./obj

WWW = -Wall -Wextra -Werror -std=c++17

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
