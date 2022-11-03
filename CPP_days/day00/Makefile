SRC  = ex00.cpp 

OBJS = $(SRC:.cpp=.o)

NAME = megaphone

CC = c++ 

CFLAGS = -std=c++98 -Wall -Wextra -Werror 

RM = rm -rf 

%.o : %.cpp 
	$(CC) -c $(CFLAGS) $< -o $@

all : $(NAME)

$(NAME) = $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)

.PHONY : all clean fclean re
