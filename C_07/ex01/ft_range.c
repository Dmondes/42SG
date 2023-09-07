/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:10:32 by delim             #+#    #+#             */
/*   Updated: 2023/07/10 10:23:55 by delim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;
	int	diff;

	i = 0;
	diff = max - min;
	if (diff <= 0)
		return (0);
	range = (int *)malloc(sizeof(int) * diff);
	if (!range)
		return (0);
	while (min < max)
	{
		range[i] = min;
		min ++;
		i ++;
	}
	return (range);
}
