##
## Makefile for Makefile in /home/kiwi/CPool_evalexpr
## 
## Made by Lyes Kaïdi
## Login   <kiwi@epitech.net>
## 
## Started on  Fri Oct 28 17:51:53 2016 Lyes Kaïdi
## Last update Fri Oct 28 17:56:07 2016 Lyes Kaïdi
##

NAME	= eval_expr

SRCS	+= main.c \
	my_functs.c \
	calc.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(OBJS) -Wall -Wextra -Werror -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
