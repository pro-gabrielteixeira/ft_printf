/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 20:15:02 by gateixei          #+#    #+#             */
/*   Updated: 2022/02/14 21:18:10 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		n;
	int		c;
	int		p;

	i = 0;
	c = 0;
	p = 0;
	if (!s1 || !s2)
		return (0);
	n = ft_strlen(s1) + ft_strlen(s2);
	new_str = (char *) malloc((n + 1) * (sizeof(char)));
	if (!new_str)
		return (0);
	while (s1[c] != '\0')
		new_str[p++] = s1[c++];
	while (s2[i] != '\0')
		new_str[p++] = s2[i++];
	new_str[p] = '\0';
	return (new_str);
}
