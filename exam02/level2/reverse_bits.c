/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:21:05 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/20 11:38:34 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char out = 0;

	for(int i = 0 ; i < 8 ; i++)
	{
		out += (octet % 2) << (7 - i);
		octet /= 2;
	}
	return out;
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
		return 1;
	unsigned char nb = (unsigned char)atoi(argv[1]);
	int rev = (int)reverse_bits(nb);
	printf("reverse: X%dX\n", rev);
	return 0;
}*/
