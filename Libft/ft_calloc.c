/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:06:58 by gateixei          #+#    #+#             */
/*   Updated: 2022/03/14 16:28:00 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	int				c;

	c = 0;
	ptr = (unsigned char *) malloc(count * size);
	if (!ptr)
		return (0);
	while ((size_t) c < (size * count))
		ptr[c++] = '\0';
	return ((void *)ptr);
}
