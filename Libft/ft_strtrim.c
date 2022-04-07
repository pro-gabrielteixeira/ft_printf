/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:02:16 by gateixei          #+#    #+#             */
/*   Updated: 2022/02/20 19:36:11 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		j;
	int		i;
	int		c;

	i = 0;
	c = 0;
	if (s1 == NULL)
		return (NULL);
	while (ft_strchr(set, s1[i]) && i < ft_strlen(s1))
		i++;
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[j]) && j > i)
		j--;
	str = malloc(sizeof(char) * (j - i + 2));
	if (str == NULL)
		return (NULL);
	while (i <= j)
		str[c++] = s1[i++];
	str[c] = '\0';
	return (str);
}
