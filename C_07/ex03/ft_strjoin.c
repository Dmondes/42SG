#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

int	ft_full_len(int size, char **strs, char *sep)
{
	int	i;
	int	concat_len;

	i = 0;
	concat_len = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		concat_len += ft_strlen(strs[i]);
		i ++;
	}
	return (concat_len);
}

void	ft_addstr(int size, char **strs, char *sep, char *concat_str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			concat_str[k ++] = strs[i][j ++];
		j = 0;
		while (sep[j] && i < (size - 1))
			concat_str[k ++] = sep[j ++];
		i ++;
	}
	concat_str[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*concat_str;
	int		concat_len;

	if (size == 0)
	{
		concat_str = (char *)malloc(sizeof(char));
		return (concat_str);
	}
	concat_len = ft_full_len(size, strs, sep);
	concat_str = (char *)malloc((concat_len + 1) * sizeof(char));
	if (!concat_str)
		return (0);
	ft_addstr(size, strs, sep, concat_str);
	return (concat_str);
}
