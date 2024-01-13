#include "../includes/ft_printf.h"

int	ft_print_xx(unsigned long n)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789ABCDEF";
	if (n < 16)
		count += ft_print_c(base[n]);
	else
	{
		count += ft_print_xx(n / 16);
		count += ft_print_c(base[n % 16]);
	}
	return (count);
}
