int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = nb;
	i = 1;
	if (power == 0)
		return (1); // anything raised to the power of 0 is 1
	if (power < 0)
		return (0); // undefined hence return 0
	if (power == 1)
		return (nb); // anything raised to the power of 1 is itself
	else
	{
		while (i < power) // mulitple till i = power
		{
			result *= nb;
			i ++;
		}
	}
	return (result);
}
