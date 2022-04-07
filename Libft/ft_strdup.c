/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:51:49 by gateixei          #+#    #+#             */
/*   Updated: 2021/12/16 14:14:51 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*src;
	int		i;
	int		c;

	c = 0;
	i = ft_strlen((char *) s1);
	str = (char *) malloc(i + 1);
	if (!str)
		return (0);
	src = (char *) s1;
	while (src[c] != '\0')
	{
		str[c] = src[c];
		c++;
	}
	str[c] = '\0';
	return (str);
}
