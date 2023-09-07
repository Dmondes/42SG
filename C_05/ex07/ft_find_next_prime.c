/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:15:32 by delim             #+#    #+#             */
/*   Updated: 2023/07/09 13:01:40 by delim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long	i;
	long	n;

	i = 2;
	n = nb;
	while (n >= (i * i))
	{
		if (n % i == 0)
			return (0);
		i ++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	unsigned int	i;
	long			n;

	i = 0;
	n = nb;
	if (n <= 2)
		return (2);
	while (n)
	{
		if (ft_is_prime(n + i) == 1)
			return (n + i);
		i ++;
	}
	return (0);
}
