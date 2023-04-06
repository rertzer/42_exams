/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:25:17 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/20 17:46:28 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	
	if (a == 0 || b == 0)
		return 0;

	unsigned int n = (a > b) ? a : b;

	while (n)
	{
		if ( n % a == 0 && n % b == 0)
			return n;
		n++;
	}
	return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc < 3)
		return 1;
	unsigned int	a = strtoul(argv[1], NULL, 10);
	unsigned int	b = strtoul(argv[2], NULL, 10);

	unsigned int n = lcm(a, b);
	printf("%u\n", n);
	return 0;
}*/
