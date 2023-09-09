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
	counter = argc; // total number of arguments
	if (argc > 1) // print command line in reverse
	{
		while (i < counter)
		{
			while (argv[counter - 1][j]) // index starts from 0
			{
				ft_putchar(argv[counter - 1][j]);
				j ++;
			}
			ft_putchar('\n');
			j = 0; // reset
			counter --; // next argument
		}
	}
}
