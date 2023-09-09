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
	if (argc > 1) // check if there are other arguments apart from program name
	{
		while (argv[i])
		{
			while (argv[i][j])
			{
				ft_putchar(argv[i][j]); // iterate through each character of the 2nd argument
				j ++;
			}
			ft_putchar('\n');
			j = 0; // reset
			i ++; // start with the next argument
		}
	}
}
