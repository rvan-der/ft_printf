/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-der <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 16:09:55 by rvan-der          #+#    #+#             */
/*   Updated: 2016/10/10 16:44:50 by rvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_isvalid_type(char c)
{
	if (c == 's' || c == 'S' || c == 'p' || c == 'd' ||\
			c == 'D' || c == 'i' || c == 'o' || c == 'O' ||\
			c == 'u' || c == 'U' || c == 'x' || c == 'X' ||\
			c == 'c' || c == 'C')
		return (1);
	return (0);
}

int			ft_isvalid_flag(char c)
{
	if (c == ' ' || c == '0' || c == '-' ||\
			c == '+' || c == '#')
		return (1);
	return (0);
}

int			ft_isvalid_mod(char c)
{
	if (c == 'l' || c == 'h' || c == 'z' || c == 'j')
		return (1);
	return (0);
}

int			ft_isint(t_type type)
{
	if (type == p || type == d || type == D || type == i || type == o || \
			type == O || type == u || type == U || type == x || type == X)
		return (1);
	return (0);
}

