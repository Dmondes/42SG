void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
// div as a placeholder to store quotient
//mod as a placeholder to store remainder
// assign div to *a
//assign mod to *b
