#include <unistd.h>

void	ft_putstr(char *s)
{
	int	n;
	int	i;
	
	i = 0;
	n = ft_strlen(s);
	while (i < n)
	{
		write(1, &s[i], 1);
		++i;
	}
}
