/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 08:41:49 by delim             #+#    #+#             */
/*   Updated: 2023/07/07 08:58:22 by delim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0 || nb == 1)
		return (result);
	if (nb > 1)
		result = nb * ft_recursive_factorial(nb - 1);
	if (result > 1)
		return (result);
	else
		return (0);
}
