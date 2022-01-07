/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:49:37 by nle-bret          #+#    #+#             */
/*   Updated: 2022/01/07 15:48:59 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(int argc, char **argv)
{
	long int	ret;
	int			pointer;

	(void)argc;
	pointer = 2;
	ret = ft_printf(argv[1], 'p', "ta mere la pute", pointer);
	printf("\n%p", &pointer);
	printf("\n%ld", ret);
	return (0);
}
