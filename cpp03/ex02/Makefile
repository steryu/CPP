# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 13:14:34 by svan-ass          #+#    #+#              #
#    Updated: 2022/12/12 16:24:51 by svan-ass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

CC			= c++
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJS =	$(SRCS:%.cpp=%.o)

all:	$(NAME)

$(NAME): $(SRCS)
	$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)
	@echo "\033[0;32mDone!\n\033[0m"

clean:
	@rm -rf $(OBJS)
	@echo "\033[0;32mClean!\n\033[0m"
fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

