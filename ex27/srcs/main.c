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

int		main(int argc, const char *argv[])
{
	int		fd;
	int		read_nbytes;
	char	read_buff[BUFF_SIZE + 1];

	--argc;
	++argv;
	if (!argc)
		ft_putstr("File name missing.\n");
	else if (argc > 1)
		ft_putstr("Too many arguments.\n");
	else
	{
		fd = open(*argv, O_RDONLY);
		read_nbytes = read(fd, read_buff, BUFF_SIZE);
		read_buff[read_nbytes] = '\0';
		ft_putstr(read_buff);
		close(fd);
	}
	return (0);
}
