# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blukasho <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/24 17:57:03 by blukasho          #+#    #+#              #
#    Updated: 2018/10/24 18:12:10 by blukasho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_putstr.c srcs/ft_putchar.c
OBJ = ft_putstr.o ft_putchar.o
GCC = gcc -Wall -Wextra -Werror

all: makelib main

makelib:
	$(GCC) -c $(SRCS)
	ar -rv libft.a $(OBJ)
	ranlib libft.a

main:
	$(GCC) srcs/main.c -o ft_display_file -L. -lft

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf ft_display_file libft.a

re : fclean all

.PHONY: all makelib main clean fclean re
