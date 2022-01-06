/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 13:37:08 by nle-bret          #+#    #+#             */
/*   Updated: 2022/01/06 17:08:51 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sources/libft.h"
#include "ft_printf.h"

long int my_read(const char *format, long int pos, long int *ret)
{
	while (format[pos] != '%' && format[pos])
	{
		write(1, &format[pos], 1);
		pos++;
		*ret = *ret + 1;
	}
	return (pos);
}

int	function (const char *format, long int pos, char c)
{
	if (format[pos + 1] == '\0')
	{
		return (0);
	}
	else if (format[pos + 1] == 'c')
		return (fct_c(c));
	/*
	else if (format[pos] == 's')
		return (fct_s());
	else if (format[pos] == 'p')
		return (fct_p());
	else if (format[pos] == 'd')
		return (fct_d());
	else if (format[pos] == 'i')
		return (fct_i());
	else if (format[pos] == 'u')
		return (fct_u());
	else if (format[pos] == 'x')
		return (fct_x());
	else if (format[pos] == 'X')
		return (fct_X());
	else if (format[pos] == '%')
		return (fct_%());
	*/
	write(1, &format[pos + 1], 1);
	return (1);
}

int ft_printf(const char *format, char c)
{
	long int	ret;
	long int	pos;

	pos = 0;
	ret = 0;
	while (pos < ft_strlen(format))
	{
		pos = my_read(format, pos, &ret);
		if (pos < ft_strlen(format))
			ret += function(format, pos, c);
		pos = pos + 2;
	}
	return (ret);
}

