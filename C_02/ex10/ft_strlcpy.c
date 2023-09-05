unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		if (i < (size - 1))
		{
			dest[i] = src[i];
		}
		i ++;
	}
	dest[i] = '\0';
	return (i);
}
//strlcpy: always null-terminates dest, returns the length of the source string
//if i < (size -1), copy the src to dest
