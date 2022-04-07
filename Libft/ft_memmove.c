/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:30:18 by gateixei          #+#    #+#             */
/*   Updated: 2022/02/19 17:23:41 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str1;
	unsigned char	*buf;
	size_t			c;

	if (!src && !dst)
		return (0);
	c = 0;
	buf = (unsigned char *) src;
	str1 = (unsigned char *) dst;
	if (buf < str1)
		while (len-- > 0)
			str1[len] = buf[len];
	else
	{
		while (c < len)
		{
			str1[c] = buf[c];
			c++;
		}
	}
	return ((void *) str1);
}
