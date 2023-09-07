/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 07:22:55 by delim             #+#    #+#             */
/*   Updated: 2023/07/07 07:52:02 by delim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*checkspace(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i ++;
	return (&(str[i]));
}

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	num;

	i = 0;
	negative = 0;
	num = 0;
	str = checkspace(str);
	while (str[i] == '+' || str[i] == '-')
	{
		if (str [i] == '-')
			negative ++;
		i ++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i ++;
	}
	if (negative % 2 == 1)
		num = -num;
	if (num)
		return (num);
	else
		return (0);
}
