int	ft_cube(int i)
{
	int	n;
	int	x;

	n = i;
	x = i;
	while (n > 1)
	{
		x = x*i;
		--n;
	}
	return(x);
}
