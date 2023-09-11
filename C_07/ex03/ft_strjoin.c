#include <stdlib.h>
// This answer does not pass moulinette
int	ft_strlen(char *str) // return length of string
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
	concat_len = ft_strlen(sep) * (size - 1); // No of seps is 1 less than the no of strings
	while (i < size)
	{
		concat_len += ft_strlen(strs[i]); // add each length of string to count
		i ++;
	}
	return (concat_len); // return total length required
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
			concat_str[k ++] = strs[i][j ++]; // add string
		j = 0; //reset j
		while (sep[j] && i < (size - 1)) // add sep between string
			concat_str[k ++] = sep[j ++];
		i ++; //next string
	}
	concat_str[k] = '\0'; // null-terminated at the end
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*concat_str;
	int		concat_len;

	if (size == 0) // check if size is 0
	{
		concat_str = (char *)malloc(sizeof(char)); // allocate memory for empty string
		return (concat_str);
	}
	concat_len = ft_full_len(size, strs, sep); // find the total length required
	concat_str = (char *)malloc((concat_len + 1) * sizeof(char)); //Allocate memory for the concatenated string + null terminator
	if (!concat_str) // if malloc fails
		return (0);
	ft_addstr(size, strs, sep, concat_str); // fill up the spaces in the range
	return (concat_str);
}
