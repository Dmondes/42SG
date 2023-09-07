/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:35:40 by delim             #+#    #+#             */
/*   Updated: 2023/07/10 11:10:04 by delim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i ++;
	}
	ft_putchar('\n');
}

int	compare_str(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i ++;
		if (s1[i] < s2[i] || s1[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc < 2)
		return (0);
	if (argc == 2)
		print_str(argv[1]);
	while ((argc - 1) > i ++)
	{
		j = 1;
		while (j < argc - i)
		{
			if (compare_str(argv[j], argv[j + 1]) > 0)
			{
				swap(&argv[j], &argv[j + 1]);
			}
			j ++;
		}
	}
	while (argc > j ++)
	{
		print_str(argv[j - 1]);
	}
}
