##
## Makefile for  in /home/maison_f/rendu/CPE_2015_Pushswap
##
## Made by Maisonnave Florian
## Login   <maison_f@epitech.net>
##
## Started on  Fri Nov 20 14:46:38 2015 Maisonnave Florian
## Last update Thu Mar  3 15:45:09 2016 Maisonnave Florian
##

CC	= gcc -Iinclude

CFLAGS	+= -W -Wextra -Wall

RM	= rm -f

LDFLAGS	=

NAME	= push_swap

SRCS	= src/pushswap.c \
	  src/use.c \
	  src/fonctions.c

OBJS	= $(SRCS:.c=.o)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
