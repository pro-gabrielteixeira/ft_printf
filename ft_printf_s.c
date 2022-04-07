/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:22:37 by gateixei          #+#    #+#             */
/*   Updated: 2022/04/07 21:23:13 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(char *temp)
{
	int	len;

	if (!temp)
		return (write(1, "(null)", 6));
	len = 0;
	len = ft_strlen(temp);
	ft_putstr_fd(temp, 1);
	return (len);
}
