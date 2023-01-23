# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/22 23:53:23 by fech-cha          #+#    #+#              #
#    Updated: 2023/01/23 11:31:22 by fech-cha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Base.cpp

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

NAME = execu

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

%.o : %.cpp Base.hpp A.hpp B.hpp C.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re