# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/22 16:31:21 by fech-cha          #+#    #+#              #
#    Updated: 2023/01/28 19:58:58 by fech-cha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = convert.cpp\
	caseChar.cpp\
	caseDouble.cpp\
	caseFloat.cpp\
	caseInt.cpp\
	errorHandling.cpp

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

NAME = convert

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

%.o : %.cpp cases.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re