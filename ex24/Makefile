# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blukasho <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/24 15:09:02 by blukasho          #+#    #+#              #
#    Updated: 2018/10/24 15:25:53 by blukasho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
		srcs/ft_swap.c
OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADERS = includes/*.h

all: $(NAME)
	
$(NAME):
	gcc -c -Wall -Werror -Wextra $(FILES) -I $(HEADERS)
	ar rc libft.a $(OBJECTS)
	ranlib libft.a

clean:
	/bin/rm -f $(OBJECT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
