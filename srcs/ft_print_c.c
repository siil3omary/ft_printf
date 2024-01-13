#include "../includes/ft_printf.h"

int	ft_print_c(int c)
{
	int count;

	count = write(1, &c, 1);
	return (count);
}