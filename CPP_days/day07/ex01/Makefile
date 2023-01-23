# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 17:48:26 by fech-cha          #+#    #+#              #
#    Updated: 2023/01/23 17:48:39 by fech-cha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

NAME = iter

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

%.o : %.cpp iter.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re