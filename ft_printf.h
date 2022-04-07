/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:32:17 by gateixei          #+#    #+#             */
/*   Updated: 2022/04/07 21:33:13 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "Libft/libft.h"
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *formar, ...);

void	ft_printf_c(char c);

int		ft_printf_i(int n);

int		ft_printf_s(char *temp);

int		ft_printf_p(unsigned long int n, int len);

int		ft_printf_d(int n);

int		ft_printf_u(unsigned int n, int len);

int		ft_printf_x(unsigned int n, int len);

int		ft_printf_xx(unsigned int n, int len);

#endif
