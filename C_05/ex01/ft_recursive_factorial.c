int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0 || nb == 1) // returns 1 because the factorial of 0 and 1 is 1
		return (result); 
	if (nb > 1)
		result = nb * ft_recursive_factorial(nb - 1); // recursion till the base case
	if (result > 1)
		return (result);
	else
		return (0);
}
