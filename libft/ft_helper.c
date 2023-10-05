#include "libft.h"

void	ft_helper(size_t write_ok, size_t size, int *ptrnum)
{
	if (write_ok != size)
	{
		*ptrnum = -1;
		return ;
	}
	*ptrnum = *ptrnum + (int) size;
}
