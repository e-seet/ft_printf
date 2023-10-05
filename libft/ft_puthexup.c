#include "libft.h"

// convert hex to int
void	ft_puthexup(unsigned int n, int *ptrnum)
{
	if (n >= 16)
	{
		ft_puthexup(n / 16, ptrnum);
		if (*ptrnum == -1)
			return ;
	}
	ft_helper(write(1, &"0123456789ABCDEF"[n % 16], 1), 1, ptrnum);
}
