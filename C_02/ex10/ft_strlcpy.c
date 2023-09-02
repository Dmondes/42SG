/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:53:24 by delim             #+#    #+#             */
/*   Updated: 2023/07/05 08:44:47 by delim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		if (i < (size - 1))
		{
			dest[i] = src[i];
		}
		i ++;
	}
	dest[i] = '\0';
	return (i);
}
