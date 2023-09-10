#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;
	int	diff;

	i = 0;
	diff = max - min;
	if (diff <= 0)
		return (0);
	range = (int *)malloc(sizeof(int) * diff);
	if (!range)
		return (0);
	while (min < max)
	{
		range[i] = min;
		min ++;
		i ++;
	}
	return (range);
}
