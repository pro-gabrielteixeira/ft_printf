/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:06:13 by gateixei          #+#    #+#             */
/*   Updated: 2021/12/14 19:23:49 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				c;

	c = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while ((size_t) c < n)
	{
		if (str1[c] == str2[c])
			c++;
		else
			return (str1[c] - str2[c]);
	}
	return (0);
}
