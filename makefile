# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/20 13:44:16 by ioduwole          #+#    #+#              #
#    Updated: 2023/11/01 19:37:27 by ioduwole         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fixed

SRC	=	$(wildcard *.cpp)

OBJ	=	$(SRC:.cpp=.o)

CC	=	g++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)
	@echo $(GREEN) "CPP02 Ex02 Compiled"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re