char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i ++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i ++;
	}
	return (dest);
}

// strncpy: to copy a specified n number of characters from one string to another. Prevents buffer overflow where src is greater than dest
//copies src to dest. If src < n, '\0' will be used to fill up the rest of the spaces
