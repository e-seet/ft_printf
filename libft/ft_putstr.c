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

	if (!s)
		return (ft_putstr("(null)", ptrnum));
	len = ft_strlen(s);
	ft_helper(write(1, s, len), len, ptrnum);
}
