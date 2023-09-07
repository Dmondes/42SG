/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queen_puzzle.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 13:10:31 by delim             #+#    #+#             */
/*   Updated: 2023/07/09 14:19:20 by delim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	create_board(int arr[10][10])
{
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			arr[i][j] = 0;
			j ++;
		}
	}
}

int	ft_nextx(int x)
{
	if (x < 9)
		return (x + 1);
	else
		return (0);
}

int	ft_nexty(int y)
{
	if (x < 9)
		return (y);
	else
		return (y + 1);
}

int	test(void)
{
	int	possiblities[10];
	int	x;
	int	y;
	int	nextx;
	int	nexty;

	x = 0;
	y = 0;
	if (x == 0 && y == 10)
	{
		if (verify() == 1)
			print_board();
	}
	nextx = ft_nextx(x);
	nexty = ft_nexty(y);
}

int	ft_ten_queens_puzzle(void)
{
	create_board();
}
