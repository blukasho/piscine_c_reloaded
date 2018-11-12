/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 17:46:26 by blukasho          #+#    #+#             */
/*   Updated: 2018/10/24 18:14:03 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"
#define BUF_SIZE 4096

int		main(int argc, char **argv)
{
	int		i;
	int		u;
	char	buf[BUF_SIZE + 1];

	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		i = open(argv[1], O_RDONLY);
		u = read(i, buf, BUF_SIZE);
		buf[u] = '\0';
		ft_putstr(buf);
		close(i);
	}
	return (0);
}
