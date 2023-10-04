#include "libft.h"

// convert hex to int
void	ft_puthex(unsigned int n, int *ptrnum)
{
	size_t	write_ok;

	if (n >= 16)
	{
		ft_puthex(n / 16, ptrnum);
		if (*ptrnum == -1)
			return ;
	}
	*ptrnum = *ptrnum + 1;
	write_ok = write(1, &"0123456789abcdef"[n % 16], 1);
	if (write_ok != (size_t) 1)
		*ptrnum = -1;
}
