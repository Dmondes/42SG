char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

//  strcpy: copies characters from the source string to the destination till a null terminator '\0' in source is encountered
// while src is != '/0', iterate through src, and each character is copied to dest, [i]: as indexed position 
// dest = '\0' added at the end as '\0' is not copied from src
