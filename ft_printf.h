#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "Libft/libft.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int     ft_printf(const char *formar, ...);

void    ft_printf_c(char c);

int     ft_printf_i(int n);

int     ft_printf_s(char *temp);

int     ft_printf_p(unsigned long int n, int len);

#endif