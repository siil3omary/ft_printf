#if !defined(FT_PRINTF_H)
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int    ft_printf(const char *, ...);
int ft_print_s(char *str);
int ft_putchar(char c);
int ft_print_c(int c);
int ft_print_percent(void);
int ft_print_d(int n);
int ft_print_u(unsigned int n);
int ft_print_x(unsigned int n);
int ft_print_xx(unsigned int n);
int ft_print_p(unsigned long long n);

#endif // FT_PRINTF_H
