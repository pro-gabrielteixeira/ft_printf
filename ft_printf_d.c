/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:17:27 by gateixei          #+#    #+#             */
/*   Updated: 2022/04/07 21:19:16 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_d(int n)
{
	char	*temp;
	int		len;

	len = 0;
	temp = ft_itoa(n);
	len = ft_strlen(temp);
	ft_putstr_fd(temp, 1);
	free(temp);
	return (len);
}
