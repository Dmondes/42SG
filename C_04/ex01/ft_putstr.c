#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1); // print the char pointed by the pointer
		str ++; // pointer incremented
	}
}
