#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>

# ifndef FILE_DESCRIPTOR
#  define FILE_DESCRIPTOR 1
# endif

int		ft_printf(const char *s, ...);

// void	ft_putchar(int c, int fd);
// void	ft_puthex(unsigned int n, int fd);
// void	ft_puthexup(unsigned int n, int fd);
// void	ft_putnbr_fd(int n, int fd);
// void	ft_putptr(void *ptr, int fd);
// void	ft_putunbr(unsigned int n, int fd);
// void	ft_putstr(char *s, int fd);

int		ft_putchar(int c, int *ptrnum);
void	ft_puthex(unsigned int n, int *ptrnum);
void	ft_puthexup(unsigned int n, int *ptrnum);
void	ft_putnbr_fd(int n, int *ptrnum);
void	ft_putptr(void *ptr, int *ptrnum);
void	ft_putunbr(unsigned int n, int *ptrnum);
void	ft_putstr(char *s, int *ptrnum);

#endif
