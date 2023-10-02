#include "libft.h"

void	ft_putnbr_fd(int n)
{
	unsigned int	m;

	if (n < 0)
	{
		ft_putchar('-');
		m = -n;
	}
	else
		m = n;
	if (m >= 10)
	{
		ft_putnbr_fd(m / 10);
	}
	write(1, &"0123456789"[m % 10], 1);
}
