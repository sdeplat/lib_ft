#include <unistd.h>

void	ft_getchar(char c)
{
	write(0, &c, 1);
}
