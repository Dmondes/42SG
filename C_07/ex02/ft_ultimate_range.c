#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max) // range: pointer to a pointer of an int
{
	int	i;
	int	diff;
	int	*array;

	i = 0;
	diff = max - min;
	if (diff <= 0)
	{
		*range = 0; // empty/ invalid range, points to 0 (NULL)
		return (0);
	}
	array = (int *)malloc(sizeof(int) * diff); //reserve space to store all the integers
	if (!array)
		return (-1); // malloc faileed
	while (i < diff)
		array[i ++] = min ++ ;
	*range = array; // assigns the address of the dynamically allocated array to *range
	return (diff);
}
