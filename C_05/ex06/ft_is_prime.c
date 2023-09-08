int	ft_is_prime(int nb)
{
	long	i;
	long	n; // use long to prevent int overflow

	i = 2;
	n = nb;
	if (n <= 1) // 1 is not prime num
		return (0);
	while (n >= (i * i))
	{
		if (n % i == 0) // check if nb is divisible by other num
			return (0); // nb is a composite number
		i ++;
	}
	return (1); // nb is prime number
}
