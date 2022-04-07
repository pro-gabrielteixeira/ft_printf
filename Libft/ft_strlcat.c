/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:05:12 by gateixei          #+#    #+#             */
/*   Updated: 2021/12/14 19:31:53 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		l;
	int		c;
	char	*source;

	c = 0;
	l = (ft_strlen(dst));
	source = (char *) src;
	if ((size_t) ft_strlen(dst) < dstsize)
	{
		while (src[c] != '\0' && (size_t) c < (dstsize - l - 1))
			*(dst++ + l) = src[c++];
		*(dst + l) = '\0';
		return (l + ft_strlen(source));
	}
	else
		return (ft_strlen(source) + dstsize);
}
