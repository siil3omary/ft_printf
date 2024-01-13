#include "../includes/ft_printf.h"
#include <stdio.h> // Add the missing include statement

int	ft_print_p(unsigned long n)
{
	int					count;
	unsigned long long	i;

	count = 0;
	count += ft_print_s("0x");
	count += ft_print_x(n);
	return (count);
}
