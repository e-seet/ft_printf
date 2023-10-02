#include "libft.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

// may need to print stuff too.. ??
// for now i just take as normal string
void	ft_putstr(char *s)
{
	int	len;

	len = ft_strlen(s);
	write(1, s, len);
}
