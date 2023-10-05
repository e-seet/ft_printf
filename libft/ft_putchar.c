#include "libft.h"

void	ft_putchar(int c, int *ptrnum)
{
	ft_helper(write(1, &c, 1), 1, ptrnum);
}
