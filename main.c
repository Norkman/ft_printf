/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:49:37 by nle-bret          #+#    #+#             */
/*   Updated: 2022/01/06 17:00:03 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(int argc, char **argv)
{
	long int	ret;

	(void)argc;
	ret = ft_printf(argv[1], 'p');
	printf("\n%ld", ret);
	return (0);
}
