/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 09:58:58 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/20 10:17:18 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return 0;
	while ( n % 2 == 0) n >>= 1;
	return (n == 1) ? 1 : 0;
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
		return 1;

	int n = atoi(argv[1]);
	n = is_power_of_2(n);
	printf("22: %d\n", n);
	return 0;
}*/
