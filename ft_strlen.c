int	ft_strlen(char *s)
{
	int	n;

	n = 0;
	while (s[n] != '\0')
		n++;
	return(n);
}
