# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 19:39:23 by fech-cha          #+#    #+#              #
#    Updated: 2023/03/21 19:40:00 by fech-cha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	PmergeMe.cpp \

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

NAME = PmergeMe

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

%.o : %.cpp PmergeMe.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re