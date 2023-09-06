char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i]) 
	{
		while (str[i + j] == to_find[j] && to_find[j]) // compare the char in to_find and the char in str
			j ++;
		if (to_find[j] == '\0') // substring is found in str
			return (&str[i]);
		j = 0; // reset count
		i ++; // iterate through str
	}
	return (NULL); // if not found
}
// strstr: find first occurence of substring (*to_find) in string str), returns to the pointer of the first char of substring in str
