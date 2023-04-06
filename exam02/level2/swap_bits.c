/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:15:14 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/20 12:44:22 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	return (octet >> 4) | (octet << 4);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
		return 1;
	unsigned char nb = (unsigned char)atoi(argv[1]);
	nb = swap_bits(nb);
	printf("swaped: %d\n", (int)nb);
	return 0;
}*/
