/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:59:32 by gateixei          #+#    #+#             */
/*   Updated: 2021/12/14 19:22:45 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	int				i;
	unsigned char	uc;
	unsigned char	*temp;

	i = 0;
	uc = c;
	temp = (unsigned char *) str;
	while ((size_t) i < n)
	{
		if (uc == temp[i])
			return ((void *) &str[i]);
		else
			i++;
	}
	return (NULL);
}
