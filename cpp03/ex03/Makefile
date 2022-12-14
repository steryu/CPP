# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 13:14:34 by svan-ass          #+#    #+#              #
#    Updated: 2022/12/14 14:38:19 by svan-ass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DiamondTrap

CC			= c++
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98 -Wshadow -Wno-shadow

SRCS =	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

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

