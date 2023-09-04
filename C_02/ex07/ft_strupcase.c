char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i ++;
	}
	return (str);
}
//The difference between 'a'(97) and 'A'(65) on the ASCII chart is 32
