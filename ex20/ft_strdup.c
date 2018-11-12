/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 09:26:08 by blukasho          #+#    #+#             */
/*   Updated: 2018/10/24 09:55:28 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = -1;
	dup = (char *)malloc(ft_strlen(src) + 1 * sizeof(char));
	if (dup != NULL)
	{
		while (src[++i])
			dup[i] = src[i];
		dup[i] = '\0';
		return (dup);
	}
	else
		return (NULL);
}
