# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 11:50:52 by svan-ass          #+#    #+#              #
#    Updated: 2022/11/15 15:56:12 by svan-ass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	harl

CC =	c++ -Wall -Wextra -Werror -std=c++98

OBJ_DIR =	objs

SRCS =	main.cpp Harl.cpp

OBJS =	$(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $(NAME)
	@echo "\033[0;32mDone!\n\033[0m"

clean:
	@rm -rf $(OBJS)
	@echo "\033[0;32mClean!\n\033[0m"
fclean:
	@rm -rf $(OBJS)
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re