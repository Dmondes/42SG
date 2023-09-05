int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i] && s1[i] < s2[i])
			return (-1);
		if (s1[i] != s2[i] && s1[i] > s2[i])
			return (1);
		i ++;
	}
	if (s1[i] == '\0' && s2[i])
		return (-1);
	if (s1[i] && s2[i] == '\0')
		return (1);
	return (0);
}
