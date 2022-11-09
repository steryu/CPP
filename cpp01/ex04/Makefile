# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 11:50:52 by svan-ass          #+#    #+#              #
#    Updated: 2022/11/09 15:00:23 by svan-ass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	sed

CC =	c++ -Wall -Wextra -Werror

OBJ_DIR =	objs

SRCS =	main.cpp

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