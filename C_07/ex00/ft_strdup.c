#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*point;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(src);
	point = (char *)malloc(sizeof(char) * len);
	if (!point)
		return (0);
	while (src[i])
	{
		point[i] = src[i];
		i ++;
	}
	point[i] = '\0';
	return (point);
}
