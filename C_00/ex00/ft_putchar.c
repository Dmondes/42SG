#include <unistd.h> 

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

//The unistd.h header contains the write function 
