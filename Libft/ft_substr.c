/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 14:23:54 by gateixei          #+#    #+#             */
/*   Updated: 2022/03/02 15:39:23 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			c;

	if (!s || start < 0)
		return (0);
	c = 0;
	if ((int) len > (ft_strlen(s) - (int) start))
		str = (char *) malloc(ft_strlen(s) * sizeof(char));
	else
		str = (char *) malloc(len * sizeof(char) + 1);
	if (!str)
		return (0);
	while (c < len && (int) start <= ft_strlen(s))
		str[c++] = s[start++];
	str[c] = '\0';
	return (str);
}
