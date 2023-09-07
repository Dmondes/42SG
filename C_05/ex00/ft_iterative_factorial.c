int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0 || nb == 1) 
		return (result); // factorial of 0 and 1 is 1
	while (nb) // while nb is not 0
	{
		result = result * nb; // Keep multiplying with the next biggestt number
		nb --;
	}
	if (result != 1)
		return (result);
	else
		return (0);
}
