#include "libft.h"

void	ft_putchar(int c, int *ptrnum)
{
	size_t	write_ok;

	*ptrnum = *ptrnum + 1;
	write_ok = write(1, &c, 1);
	if (write_ok == (size_t) -1)
		*ptrnum = -1;
}
