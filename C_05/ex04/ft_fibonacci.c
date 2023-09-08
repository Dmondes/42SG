int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1); // should not have -ve
	if (index < 2)
		return (index); // base case
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2)); 
}
//Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones
