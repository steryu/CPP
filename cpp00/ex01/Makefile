# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 13:14:34 by svan-ass          #+#    #+#              #
#    Updated: 2022/10/25 14:57:40 by svan-ass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	phonebook

CC =	g++ -Wall -Wextra -Werror

OBJ_DIR =	objs

SRCS =	PhoneBook.cpp Contact.cpp

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

