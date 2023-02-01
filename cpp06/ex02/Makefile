# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 11:37:05 by svan-ass          #+#    #+#              #
#    Updated: 2023/02/01 14:25:37 by svan-ass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = identify

CC			= c++
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98 -Wshadow -Wno-shadow

SRCS =	main.cpp Base.cpp

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