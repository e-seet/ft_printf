#include "libft.h"

// convert hex to int
void	ft_puthexup(unsigned int n, int *ptrnum)
{
	if (n >= 16)
	{
		ft_puthexup(n / 16, ptrnum);
	}
	*ptrnum = *ptrnum + 1;
	write(1, &"0123456789ABCDEF"[n % 16], 1);
}
