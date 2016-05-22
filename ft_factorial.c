int	ft_factorial(int i)
{
	int	n;
	int	x;

	n = i-1;
	x = i;
	while (n > 0)
	{
		x = x*n;
		--n;
	}
	return(x);
}
