int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0); // return 0 if power is -ve 
	if (power == 0)
		return (1); // base case of power is 0
	if (power == 1)
		return (nb); // base case of power is 1
	else
	{
		result *= ft_recursive_power(nb, (power - 1)); // recursion
		return (result);
	}
}
