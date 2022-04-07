/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:19:34 by gateixei          #+#    #+#             */
/*   Updated: 2022/04/07 21:20:22 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_i(int n)
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
