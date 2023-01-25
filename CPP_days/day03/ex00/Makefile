# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 22:01:00 by fech-cha          #+#    #+#              #
#    Updated: 2023/01/25 22:03:30 by fech-cha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	ClapTrap.cpp

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

NAME = ClapTrap

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

%.o : %.cpp ClapTrap.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re