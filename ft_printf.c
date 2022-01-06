/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 13:37:08 by nle-bret          #+#    #+#             */
/*   Updated: 2022/01/06 15:36:33 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sources/libft.h"
//#include "ft_printf.h"

long int my_read(const char format, long int pos, long int *ret)
{
	while (format[pos] != '%')
	{
		write(1, &format[pos], 1);
		pos++;
		ret++;
	}
	return (pos);
}

int	function (const char format, long int pos)
{
	if (format[pos + 1] == '\0')
		return (0);
	else if (format[pos] == 'c')
		return (fct_c());
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
	write(1, &format[pos + 1], 1);
	return (1);
}

int ft_printf(const char format, va_list ap)
{
	long int	ret;
	long int	pos;

	pos = 0;
	ret = 0;
	while (format[pos])
	{
		pos = my_read(format, pos, &ret);
		ret += function(format, pos);
		if (format[pos + 1])
			pos = pos + 1;
		pos = pos + 1;
	}
	return (ret);
}

