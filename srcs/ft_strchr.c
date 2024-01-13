#include "../includes/ft_printf.h"

int ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == (char)c)
            return (1);
        i++;
    }
    if (s[i] == (char)c)
        return (1);
    return (0);
}