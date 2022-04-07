/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 22:30:54 by gateixei          #+#    #+#             */
/*   Updated: 2022/03/14 18:29:36 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystake, const char *needle, size_t len)
{
	size_t		c;
	size_t		i;
	char		*str;

	c = 0;
	i = 0;
	str = (char *) haystake;
	if (needle[0] == '\0')
		return (str);
	while (str[0] != '\0' && ++i <= len)
	{
		while (str[c] == needle[c] && (i + c) <= len)
		{
			if (needle[c + 1] == '\0')
				return (str);
			c++;
		}
		c = 0;
		str++;
	}		
	return (0);
}
