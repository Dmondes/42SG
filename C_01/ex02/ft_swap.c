void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

// Key concept here is to have a 3rd variable as a placeholder for swapping
