#include "libft.h"

void	ft_putunbr(unsigned int n, int *ptrnum)
{
	size_t	write_ok;

	if (n < 0)
	{
		ft_putchar('-', ptrnum);
		if (*ptrnum == -1)
			return ;
		n = n * -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, ptrnum);
		if (*ptrnum == -1)
			return ;
	}
	*ptrnum = *ptrnum + 1;
	write_ok = write(1, &"0123456789"[n % 10], 1);
	if (write_ok != (size_t) 1)
		*ptrnum = -1;
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