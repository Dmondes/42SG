int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i ++;
	}
	if (s1[i] == '\0' && s2[i])
		return (-1);
	if (s1[i] && s2[i] == '\0')
		return (1);
	else
		return (0);
}
// strcmp: compare 2 strings
//If f s1 is lexicographically less than s2, it returns -1.
//If s1 is lexicographically greater than s2, it returns 1.
//If s1 is shorter than s2, returns -1. If s1 is longer than s2, returns 1.
//If s1 and s2 are equal, it returns 0.
