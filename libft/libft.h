#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

// int	ft_putchar(int c);
// void	ft_puthex(unsigned int n);
// void	ft_puthexup(unsigned int n);
// void	ft_putnbr_fd(int n);
// void	ft_putptr(void *ptr);
// void	ft_putunbr(unsigned int n);
// void	ft_putstr(char *s);

void	ft_putchar(int c, int *ptrnum);
void	ft_puthex(unsigned int n, int *ptrnum);
void	ft_puthexup(unsigned int n, int *ptrnum);
void	ft_putnbr_fd(int n, int *ptrnum);
void	ft_putptr(void *ptr, int *ptrnum);
void	ft_putunbr(unsigned int n, int *ptrnum);
void	ft_putstr(char *s, int *ptrnum);

#endif