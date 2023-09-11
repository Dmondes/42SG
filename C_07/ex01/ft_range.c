#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i; // index
	int	*range; // array
	int	diff; //counts no of int in the range

	i = 0;
	diff = max - min;
	if (diff <= 0)
		return (0); // no int in range
	range = (int *)malloc(sizeof(int) * diff); // reserve space to store the integers
	if (!range)
		return (0); // malloc failed
	while (min < max) // max is excluded in range
	{
		range[i] = min;
		min ++;
		i ++;
	}
	return (range);
}
