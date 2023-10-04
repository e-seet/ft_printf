#include "libft.h"

int	ft_putchar(int c, int *ptrnum)
{
	*ptrnum = *ptrnum + 1;
	return (write(1, &c, 1));
}
