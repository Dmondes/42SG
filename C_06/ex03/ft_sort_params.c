#include <unistd.h>

void	ft_putchar(char c) // print character
{
	write(1, &c, 1);
}

void	print_str(char *str) // print entire string
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

int	compare_str(char *s1, char *s2) // compares two strings s1 and s2 lexicographically
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i ++;
		if (s1[i] < s2[i] || s1[i])
			return (s1[i] - s2[i]); // -ve if s1 is less than s2, else +ve if s1 is more than s2
	}
	return (0); // both are equal
}

void	swap(char **s1, char **s2) // swap the arguments around
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
		return (0); // nothing to print/ sort
	if (argc == 2)
		print_str(argv[1]); // print 1 argument, no need to sort
	while ((argc - 1) > i ++)
	{
		j = 1;
		while (j < argc - i) // bubble sort
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
