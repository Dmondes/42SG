/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 08:42:55 by delim             #+#    #+#             */
/*   Updated: 2023/07/09 09:33:48 by delim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	checkchar(char *str)
{
	int	i;
	int	j;
	int	compare;

	i = 0;
	while (str[i])
	{
		j = i;
		compare = str[i];
		while (str[j++])
		{
			if (compare == str[j])
				return (0);
		}
		i ++;
	}
	return (i);
}

int	checkerror(char *base)
{
	int	i;
	int	chekcha;

	i = 0;
	chekcha = checkchar(base);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (chekcha == 0)
			return (0);
		i ++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	long	len;

	n = nbr;
	len = checkerror(base);
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (len != 0)
	{
		if (n < len)
			ft_putchar(base[(n % len)]);
		else
		{
			ft_putnbr_base((n / len), base);
			ft_putnbr_base((n % len), base);
		}
	}
}		
