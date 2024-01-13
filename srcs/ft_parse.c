#include "../includes/ft_printf.h"

int	ft_parse(const char *format, int *i, va_list ap)
{
	int count;
	t_flags flags;

	count = 0;
	(*i)++;
	ft_init_flags(&flags);
	ft_parse_flags(format, i, &flags, ap);
	if (format[*i] == 'c')
		count += ft_print_c(flags, ap);
	else if (format[*i] == 's')
		count += ft_print_s(flags, ap);
	else if (format[*i] == 'p')
		count += ft_print_p(flags, ap);
	else if (format[*i] == 'd' || format[*i] == 'i')
		count += ft_print_d(flags, ap);
	else if (format[*i] == 'u')
		count += ft_print_u(flags, ap);
	else if (format[*i] == 'x')
		count += ft_print_x(flags, ap);
	else if (format[*i] == 'X')
		count += ft_print_xx(flags, ap);
	else if (format[*i] == '%')
		count += ft_print_percent(flags);
	return (count);
}