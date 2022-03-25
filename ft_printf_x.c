#include "ft_printf.h"

int ft_printf_x(int n, int len)
{
    char	hexa[17];
    int     i;
	char	s;

	s = '0';
    i = -1;
    while (++i < 16)
	{
		if (i == 10)
			s = 'W';
        hexa[i] = i + s;
	}
	hexa[i] = '\0';
	if (n > 15)
		len = ft_printf_x((n / 16), len);
	n = n % 16;
	len++;
	ft_putchar_fd((hexa[n]), 1);
	return (len);
}