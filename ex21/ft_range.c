/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 10:07:48 by blukasho          #+#    #+#             */
/*   Updated: 2018/10/24 19:16:51 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *res;
	int i;

	i = -1;
	if (min >= max)
		return (NULL);
	res = (int*)malloc((max - min) * sizeof(int));
	while (min < max)
		res[++i] = min++;
	return (res);
}
