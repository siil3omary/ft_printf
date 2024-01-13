#include "../includes/ft_printf.h"

int ft_print_s(char *str)
{
    int count;

    count = 0;

    if (!str)
        str = "(null)";
    while (str[count])
       count += ft_putchar(str[count]);
    
    return (count);
}
