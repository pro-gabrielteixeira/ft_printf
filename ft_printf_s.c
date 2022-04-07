#include "ft_printf.h"

int ft_printf_s(char *temp)
{
    int len;

    if (!temp)
        return (write(1, "(null)", 6));
    len = 0;
    len = ft_strlen(temp);
	ft_putstr_fd(temp, 1);
    return (len);
}