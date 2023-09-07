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
		compare = str[i]; //iterate through and compare char to char to find duplicates
		while (str[j++])
		{
			if (compare == str[j])
				return (0); // there is a duplicate, base does not contain unique characters
		}
		i ++;
	}
	return (i); // else return the entire string, all characters are unique
}

int	checkerror(char *base)
{
	int	i;
	int	chekcha;

	i = 0;
	chekcha = checkchar(base);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-') // if these signs are encountered, then base is invalid
			return (0);
		if (chekcha == 0) // duplicate chars, invalid base
			return (0);
		i ++;
	}
	if (i < 2) //base cannot be less than 2
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	long	len;

	n = nbr;
	len = checkerror(base); //check if base is valid
	if (n < 0)
	{
		ft_putchar('-'); // print the - sign
		n = -n; // converts num to +ve
	}
	if (len != 0) // check len of base is not 0
	{
		if (n < len)
			ft_putchar(base[(n % len)]); // get remainder, n is within base
		else
		{
			ft_putnbr_base((n / len), base); // recursion to get base case
			ft_putnbr_base((n % len), base); // print the remainder
		}
	}
}		
//converts int to a string representation dependent on the base
