int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0); //no char to compare
	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i] && s1[i] < s2[i])
			return (-1); // s1 is lexicographically less than s2
		if (s1[i] != s2[i] && s1[i] > s2[i])
			return (1); // s1 is lexicographically greater than s2
		i ++;
	}
	if (s1[i] == '\0' && s2[i])
		return (-1); // s1 is shorter than s2
	if (s1[i] && s2[i] == '\0')
		return (1); // s1 is longer than s2
	return (0); // Both strings are equal up to the first n characters
}
// compare 2 strings up to n characters

