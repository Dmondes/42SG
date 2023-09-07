/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 10:38:49 by delim             #+#    #+#             */
/*   Updated: 2023/07/09 17:14:25 by delim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	counter;

	i = 1;
	j = 0;
	counter = argc;
	if (argc > 1)
	{
		while (i < counter)
		{
			while (argv[counter - 1][j])
			{
				ft_putchar(argv[counter - 1][j]);
				j ++;
			}
			ft_putchar('\n');
			j = 0;
			counter --;
		}
	}
}
