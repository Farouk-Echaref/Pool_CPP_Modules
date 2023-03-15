# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 00:56:21 by fech-cha          #+#    #+#              #
#    Updated: 2023/03/15 04:51:25 by fech-cha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	BitcoinExchange.cpp \

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

NAME = btc

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

%.o : %.cpp BitcoinExchange.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re