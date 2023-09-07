/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 10:26:36 by delim             #+#    #+#             */
/*   Updated: 2023/07/07 10:37:41 by delim            ###   ########.fr       */
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

	i = 1;
	j = 0;
	if (argc > 1)
	{
		while (argv[i])
		{
			while (argv[i][j])
			{
				ft_putchar(argv[i][j]);
				j ++;
			}
			ft_putchar('\n');
			j = 0;
			i ++;
		}
	}
}
