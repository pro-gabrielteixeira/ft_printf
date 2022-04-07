/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:26:44 by gateixei          #+#    #+#             */
/*   Updated: 2022/03/13 00:07:56 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_iswhitespace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	neg;
	int	c;

	result = 0;
	c = 0;
	neg = 1;
	while (ft_iswhitespace(*str))
		str++;
	if (*str == '+' || *str == '-')
		neg = 44 - *str++;
	while (ft_isdigit(*str))
	{
		if (c++ > 18)
			return ((neg == -1) - 1);
		result = (*str++ - 48) + (result * 10);
	}
	return (result * neg);
}
