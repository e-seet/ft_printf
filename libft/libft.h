#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_putchar(int c);
void	ft_puthex(unsigned int n);
void	ft_puthexup(unsigned int n);
void	ft_putnbr_fd(int n);
void	ft_putptr(void *ptr);
void	ft_putunbr(unsigned int n);
void	ft_putstr(char *s);

#endif