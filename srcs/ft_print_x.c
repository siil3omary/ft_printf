#include "../includes/ft_printf.h"

int	ft_print_x(unsigned long n)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (n < 16)
		count += ft_print_c(base[n]);
	else
	{
		count += ft_print_x(n / 16);
		count += ft_print_c(base[n % 16]);
	}
	return (count);
}
