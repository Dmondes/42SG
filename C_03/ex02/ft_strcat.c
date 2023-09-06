char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i ++; // iterate till the end of dest
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j]; // start to add char from src to end of dest
		i ++;
		j ++;
	}
	dest[i] = '\0'; // null-terminate concatenated string
	return (dest);
}
// append one string to the end of another string
