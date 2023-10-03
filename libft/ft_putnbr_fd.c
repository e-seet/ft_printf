#include "libft.h"

void	ft_putnbr_fd(int n, int *ptrnum)
{
	unsigned int	m;

	ptrnum = ptrnum + 1;
	if (n < 0)
	{
		ft_putchar('-', ptrnum);
		m = -n;
	}
	else
		m = n;
	if (m >= 10)
	{
		ft_putnbr_fd(m / 10, ptrnum);
	}
	write(1, &"0123456789"[m % 10], 1);
}
