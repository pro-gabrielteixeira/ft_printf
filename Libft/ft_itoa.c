/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:18:41 by gateixei          #+#    #+#             */
/*   Updated: 2022/03/02 17:30:50 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

int	count(int n)
{
	int	temp;
	int	j;

	j = 0;
	temp = n;
	if (temp < 0)
	{
		j++;
		temp = temp * (-1);
	}
	while (temp > 0)
	{
		temp = temp / 10;
		j++;
	}
	return (j);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*ptr;

	if (n == 0)
		return (ft_strdup("0"));
	else if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = count(n);
	ptr = malloc((i + 1) * (sizeof(char)));
	if (!ptr)
		return (0);
	if (n < 0)
	{
		n = n * (-1);
		ptr[0] = '-';
	}
	ptr[i] = '\0';
	while (n > 0)
	{
		i--;
		ptr[i] = (n % 10) + '0';
		n = n / 10;
	}
	return (ptr);
}
