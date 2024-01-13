#if !defined(FT_PRINTF_H)
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
#include <string.h>

int	ft_printf(const char *, ...);
int ft_strchr(const char *s, int c);
int	ft_print_s(char *str);
int	ft_print_c(int c);
int	ft_print_d(int n);
int	ft_print_u(unsigned int n);
int	ft_print_x(unsigned long n);
int	ft_print_xx(unsigned long n);
int	ft_print_p(unsigned long n);

#endif // FT_PRINTF_H
