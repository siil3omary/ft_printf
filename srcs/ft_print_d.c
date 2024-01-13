#include "../includes/ft_printf.h"

int	ft_print_d(int nb)
{
	unsigned int	nbr;
	int				count;

	count = 0;
	if (nb < 0)
	{
		count += ft_print_c('-');
		nbr = -nb;
	}
	else
		nbr = nb;
	if (nbr >= 10)
	{
		count += ft_print_d(nbr / 10);
		count += ft_print_d(nbr % 10);
	}
	else
		count += ft_print_c(nbr + '0');
	return (count);
}
