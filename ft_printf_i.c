#include "ft_printf.h"

int ft_printf_i(int n)
{
    char    *temp;
    int     len;

    len = 0;
    temp = ft_itoa(n);
    len = ft_strlen(temp);
    ft_putstr_fd(temp, 1);
    free(temp);
    return (len);
}