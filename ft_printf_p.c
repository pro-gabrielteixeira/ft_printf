/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:20:41 by gateixei          #+#    #+#             */
/*   Updated: 2022/04/07 21:22:20 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversor(unsigned long int n, int len)
{
	char	hexa[17];
	int		i;
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
		len = ft_conversor((n / 16), len);
	n = n % 16;
	len++;
	ft_putchar_fd((hexa[n]), 1);
	return (len);
}

int	ft_printf_p(unsigned long int n, int len)
{
	ft_putstr_fd("0x", 1);
	len = ft_conversor(n, len);
	return (len + 2);
}
