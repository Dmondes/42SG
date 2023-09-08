int	ft_sqrt(int nb)
{
	int		i;

	i = 0;
	if (nb < 0) // handle -ve values, no real sqrt 
		return (0);
	while (nb >= (i * i) && (i < 46341)) // prevent int overflow
	{
		if (nb == (i * i))
			return (i); // sqrt found
		i ++;
	}
	return (0); // no sqrt
}
