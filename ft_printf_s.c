#include "ft_printf.h"

int ft_printf_s(char *temp)
{
    int len;

    len = 0;
    len = ft_strlen(temp);
	ft_putstr_fd(temp, 1);
    return (len);
}