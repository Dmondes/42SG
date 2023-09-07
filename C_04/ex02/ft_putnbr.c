#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n; // this is to handle the smallest int value (-ve)

	n = nb;
	if (n < 0) // if n is -ve, print the -sign and convert n to positive
	{
		ft_putchar('-'); 
		n = -n;
	}
	if (n < 10)
		ft_putchar(n + '0'); // if n is less than 10, just print the digit char
	else
	{
		ft_putnbr(n / 10); // removing the last digit, recursion till the base case of a single digit
		ft_putnbr(n % 10); // get the remainder, last digit
	}
}
// should be able to display all possible values within an int type variable, including -ve
