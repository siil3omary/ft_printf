#include "../includes/ft_printf.h"

int    ft_print_u(unsigned int n)
{
    int		count;

    count = 0;
    if (n >= 10)
    {
        count += ft_print_u(n / 10);
        count += ft_print_u(n % 10);
    }
    else
        count += ft_print_c(n + '0');

    return (count);
}
