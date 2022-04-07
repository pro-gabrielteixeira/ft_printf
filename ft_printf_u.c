/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:23:25 by gateixei          #+#    #+#             */
/*   Updated: 2022/04/07 21:34:09 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_u(unsigned int n, int len)
{
	char	dec[11];
	int		i;

	i = -1;
	while (++i < 10)
		dec[i] = i + '0';
	dec[i] = '\0';
	if (n > 9)
		len = ft_printf_u((n / 10), len);
	n = n % 10;
	len++;
	ft_putchar_fd((dec[n]), 1);
	return (len);
}
