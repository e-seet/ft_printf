#include "libft.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *s, int *ptrnum)
{
	int		len;
	size_t	write_ok;

	if (!s)
		return (ft_putstr("(null)", ptrnum));
	len = ft_strlen(s);
	*ptrnum = *ptrnum + len ;
	write_ok = write(1, s, len);
	if (write_ok != (size_t) len)
		*ptrnum = -1;
}
