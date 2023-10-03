#include "libft.h"

// convert hex to int
void	ft_puthexup(unsigned int n, int *ptrnum)
{
	ptrnum = ptrnum + 1;
	if (n >= 16)
	{
		ft_puthex(n / 16, ptrnum);
	}
	write(1, &"0123456789ABCDEF"[n % 16], 1);
}
