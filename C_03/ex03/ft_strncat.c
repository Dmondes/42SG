char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i ++; // iterate till the end of dest
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j]; // append as long as j counter is less than nb
		i ++;
		j ++;
	}
	dest[i] = '\0'; // last space for null-terminated char
	return (dest);
}
// concatenate char from src to dest up to n characters, prevent buffer overflow

