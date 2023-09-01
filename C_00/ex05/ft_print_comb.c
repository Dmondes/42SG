#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == '7' && b == '8' && c == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		ft_putchar(a, b, c);
		c++;
		if (c > '9')
		{
			b++;
			c = b + 1;
		}
		if (b > '8')
		{
			a++;
			b = a + 1;
			c = b + 1;
		}
	}
}

//ft_put_char: to print each possible combn
//Largest possible number for the 1st digit a is 7
//The increment is always applied to the last digit first, 
//If last digit is greater than 9, the 2nd digit will be incremented, and the last digit = 2nd digit + 1
//If 2nd digit is greater than 8, the 1st digit will be incremented, 2nd digit = 1st digit + 1 and 3rd digit = 2nd digit + 1
