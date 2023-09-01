#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{	
		write(1, str, 1);
		str++;
	}
}
//while (*str != '\0') is the same as while (*str)
// null-terminating character '\0' is evaluated as false in while conditional
