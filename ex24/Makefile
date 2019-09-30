# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelphias <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/16 20:21:06 by aelphias          #+#    #+#              #
#    Updated: 2019/09/19 15:40:54 by aelphias         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c \
	   ./srcs/ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o \
	  ft_swap.o

INCLUDES = ./includes/

all:
	gcc -c $(SRC) -I $(INCLUDES)*.h
	ar -rcs $(NAME) $(OBJ)
    	

clean:
	rm -f *.o

fclean: clean
	rm -f libft.a

re: fclean 
	make
