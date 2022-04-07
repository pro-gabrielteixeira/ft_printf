/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:15:36 by gateixei          #+#    #+#             */
/*   Updated: 2022/02/20 19:37:04 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *) s;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char) c)
			return (&ptr[i]);
		else
			i++;
	}
	if (s[i] == 0 && c != 0)
		return (NULL);
	return (&ptr[i]);
}
