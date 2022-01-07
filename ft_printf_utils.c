/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:27:19 by nle-bret          #+#    #+#             */
/*   Updated: 2022/01/07 16:02:11 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int fct_c(va_list args)
{
	char	c;

	c = (char)va_arg(args, int);
	write(1, &c, 1);
	return (1);
}

int	fct_s(va_list args)
{
	char	*str;

	str = va_arg(args, char *);
	ft_putstr_fd(str, 1);
	return(ft_strlen(str));
}

int	fct_p(va_list args)
{
	unsigned long long	p_int;
	char				*str;
	char				*str_p;

	p_int = va_arg(args, unsigned long long);
	str = ft_itoa(p_int);
	str_p = ft_convert_base(str, "0123456789", "0123456789abcdef");
	ft_putstr_fd(str, 1);
	return(ft_strlen(str_p));
}
