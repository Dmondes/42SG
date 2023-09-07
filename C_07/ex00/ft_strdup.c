/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 08:38:41 by delim             #+#    #+#             */
/*   Updated: 2023/07/10 10:09:49 by delim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*point;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(src);
	point = (char *)malloc(sizeof(char) * len);
	if (!point)
		return (0);
	while (src[i])
	{
		point[i] = src[i];
		i ++;
	}
	point[i] = '\0';
	return (point);
}
