/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:26:46 by gateixei          #+#    #+#             */
/*   Updated: 2022/02/18 21:30:56 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*temp;
	size_t			c;

	c = 0;
	if (!dst && !src)
		return (0);
	temp = (unsigned char *) dst;
	while (c < n)
	{
		temp[c] = ((unsigned char *) src)[c];
		c++;
	}
	return (dst);
}
