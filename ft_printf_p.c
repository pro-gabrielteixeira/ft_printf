#include "ft_printf.h"


int ft_conversor(unsigned long int n, int len)
{
	char	hexa[] = "0123456789abcdef";

	if (n > 15)
		len = ft_conversor((n / 16), len);
	n = n % 16;
	len++;
	ft_putchar_fd((hexa[n]), 1);
	return (len);
}

int ft_printf_p(unsigned long int n, int len)
{
    ft_putstr_fd("0x", 1);
    len = ft_conversor(n, len);
    return (len + 2);
}