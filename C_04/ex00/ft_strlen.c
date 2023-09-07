int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i ++; // counter increases as the loop iterate through the string
	}
	return (i); // return final count
}

