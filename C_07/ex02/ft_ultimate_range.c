#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	diff;
	int	*array;

	i = 0;
	diff = max - min;
	if (diff <= 0)
	{
		*range = 0;
		return (0);
	}
	array = (int *)malloc(sizeof(int) * diff);
	if (!array)
		return (-1);
	while (i < diff)
		array[i ++] = min ++ ;
	*range = array;
	return (diff);
}
