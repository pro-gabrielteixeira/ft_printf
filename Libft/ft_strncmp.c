/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 22:07:28 by gateixei          #+#    #+#             */
/*   Updated: 2021/12/14 19:19:05 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				c;
	unsigned char	*str1;
	unsigned char	*str2;

	if (n <= 0)
		return (0);
	c = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while ((str1[c] != '\0' || str2[c] != '\0') && (size_t) c < n)
	{
		if (str1[c] != str2[c])
			return (str1[c] - str2[c]);
		c++;
	}
	return (0);
}
