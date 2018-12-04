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

NAME = libadd.a
P = ft_display_file

CC = gcc -march=native
LC = ar -rcsv
FLAGS = -Wall -Wextra -Werror -Ofast

WHITE=\033[0m
GREEN=\033[32m
RED=\033[31m

SRCS = srcs/ft_putstr.c srcs/ft_putchar.c
OBJ = $(SRC:%.c=%.o)

P_SRC = srcs/main.c

LFLAGS = -L . -ladd

all: $P

$(OBJ): %.o: %.c
	@echo -n '+'
	@$(CC) -c $(FLAGS) $< -o $@

$(NAME): $
	$(LC) $(NAME) $(OBJ)
	@echo "> additionals $(GREEN)compiled$(WHITE)"

$P: $(NAME)
	@$(CC) $(P_SRC) $(FLAGS) $(LFLAGS) -o $P
	@echo $P "$(GREEN)compiled$(WHITE)"

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(P)
	@rm -rf $(NAME)
	@echo "$(RED)deleted$(WHITE):" $(NAME)
	@echo "$(RED)deleted$(WHITE):" $(P)

re : fclean all

.PHONY: all clean fclean re
