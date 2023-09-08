int	ft_is_prime(int nb) // check for prime number
{
	long	i;
	long	n;

	i = 2;
	n = nb;
	while (n >= (i * i))
	{
		if (n % i == 0)
			return (0);
		i ++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	unsigned int	i;
	long			n;

	i = 0;
	n = nb;
	if (n <= 2)
		return (2); // deduce 2 is the next prime number
	while (n)
	{
		if (ft_is_prime(n + i) == 1) // increment and check if it is prime number
			return (n + i); // found prime number
		i ++;
	}
	return (0); // no prime number found
}
