#include "libft.h"

void	ft_putunbr(unsigned int n, int *ptrnum)
{
	ft_putnbr_fd(n, ptrnum);
}

// if (n < 0)
// 	{
// 		ft_putchar('-');
// 		n = -n;
// 	}
// 	else
// 		n = n;
// 	if (n >= 10)
// 	{
// 		ft_putnbr_fd(n / 10);
// 	}
// 	write(1, &"0123456789"[n % 10], 1);