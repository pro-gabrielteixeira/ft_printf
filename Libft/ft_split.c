/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:07:07 by gateixei          #+#    #+#             */
/*   Updated: 2022/03/03 21:27:05 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

int	str_count(const char *str, char c)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (str[j] != '\0')
	{
		if (str[j] == c)
		{
			while (str[j] && str[j] == c)
				j++;
			i--;
		}
		else
			while (str[j] != c && str[j] != '\0')
				j++;
		i++;
	}
	return (i);
}

char	**ft_split(char const *str, char c)
{
	char	**rtn;
	int		k;
	int		i;
	int		j;

	if (!str)
		return (NULL);
	i = str_count(str, c);
	rtn = (char **) malloc((i + 1) * sizeof(char *));
	if (!rtn)
		return (NULL);
	k = 0;
	while (k < i)
	{
		while (str[0] && str[0] == c)
			str++;
		j = 0;
		while (str[j] && str[j] != c)
			j++;
		rtn[k++] = ft_substr(str, 0, j);
		str = &str[j];
	}
	rtn[i] = NULL;
	return (rtn);
}
