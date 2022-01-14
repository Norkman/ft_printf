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
#include <limits.h>

int main(int argc, char **argv)
{
	//long int	ret;
	//int	pointer;
	int		i;

	(void)argc;
	(void)argv;
	i = 0;
	//ret = ft_printf(argv[1], 'p', "ta mere la pute", pointer);
	i = printf("%p", ULONG_MAX);
	printf("  %d\n", i);
	i = ft_printf("%p", ULONG_MAX);
	printf("  %d\n", i);
	i = printf("%p", -ULONG_MAX);
	printf("  %d\n", i);
	i = ft_printf("%p", -ULONG_MAX);
	printf("  %d\n", i);
	//printf("\n%ld\n", ret);
	return (0);
}
