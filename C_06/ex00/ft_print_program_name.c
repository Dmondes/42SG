#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 1) // only argument is the program name
	{
		while (argv[0][i])
		{
			ft_putchar(argv[0][i]); // iterate through the program name
			i ++;
		}
		ft_putchar('\n'); // print newline
		return (0);
	}
}
