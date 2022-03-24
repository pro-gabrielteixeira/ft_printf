#include <stdio.h>
#include <stdarg.h>
#include "libft.h"


void	print_esp(const char c, va_list *print)
{
	if (c == 'c')
		ft_putchar_fd(va_arg((*print), int), 1);
}

int	ft_printf(const char *format, ...)
{
	int	len;

	len = 0;
	va_list	print;
	va_start(print, format);
	while (format[len] != '\0')
	{
		if (format[len] == '%')
		{
			print_esp(format[len + 1], &print);
			len++;
		}
		else
		{
			ft_putchar_fd(format[len], 1);
			len++;
		}
	}
	va_end(print);
	return (len);
}
int	main(void)
{
	int	n;
	int	n2;

	n = printf("%c\n", 'a');
	printf("%d \n", n);
	n2 = ft_printf("%c\n", 'A');
	printf("%d \n", n2);
	return (n);	
}
