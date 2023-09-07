/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:26:34 by delim             #+#    #+#             */
/*   Updated: 2023/07/10 12:28:55 by delim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	diff;
	int	*array;

	i = 0;
	diff = max - min;
	if (diff <= 0)
	{
		*range = 0;
		return (0);
	}
	array = (int *)malloc(sizeof(int) * diff);
	if (!array)
		return (-1);
	while (i < diff)
		array[i ++] = min ++ ;
	*range = array;
	return (diff);
}
