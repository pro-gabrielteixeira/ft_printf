/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 22:59:29 by gateixei          #+#    #+#             */
/*   Updated: 2021/12/14 19:20:07 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *) s;
	i = ft_strlen(str) + 1;
	while (--i >= 0)
		if (str[i] == (unsigned char) c)
			return (&str[i]);
	return (0);
}
