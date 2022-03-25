
#include "ft_printf.h"

int	print_esp(const char c, va_list *print)
{
	int		len;

	len = 1;
	if (c == 'c')
		ft_printf_c((va_arg((*print), int)));
	else if (c == 'i')
		len = ft_printf_i((va_arg((*print), int)));
	else if (c == 's')
		len = ft_printf_s((va_arg((*print), char *)));
	else if (c == '%')
		ft_putchar_fd(c, 1);
	else if (c == 'p')
		len = ft_printf_p((va_arg((*print), unsigned long int)), 0);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	char	*str;

	len = 0;
	str = (char *) format;
	va_list	print;
	va_start(print, format);
	while (str[0] != '\0')
	{
		if (str[0] == '%')
		{
			str++;
			len = print_esp(str[0], &print) + len;
		}
		else
		{
			ft_putchar_fd(str[0], 1);
			len++;
		}
		str++;
	}
	va_end(print);
	return (len);
}
int	main(void)
{
	int	n;
	int	n2;
	void	*ptr;

	n = printf("%s %i %% %p\n", "Hello World", 42, &ptr);
	printf("%d \n", n);
	n2 = ft_printf("%s %i %% %p\n", "Hello World", 42, &ptr);
	printf("%d \n", n2);
	return (n);	
}
