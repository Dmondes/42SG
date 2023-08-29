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
