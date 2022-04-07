/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 19:16:00 by gateixei          #+#    #+#             */
/*   Updated: 2021/12/14 19:33:38 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		c;

	c = 0;
	if (dstsize != 0)
	{
		while (src[c] != '\0' && (size_t) c < dstsize - 1)
		{
			dst[c] = src[c];
			c++;
		}
		dst[c] = '\0';
	}
	return (ft_strlen((char *)src));
}
