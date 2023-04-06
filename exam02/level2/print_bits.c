/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:04:37 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/20 11:19:18 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	out[8];

void	print_bits(unsigned char octet)
{
	for (int i = 0 ; i < 8 ; i++)
	{
		out[7 - i] = '0' + octet % 2;
		octet /= 2;
	}
	write(1, out, 8);
}
/*
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
		return 1;

	print_bits((unsigned char)atoi(argv[1]));
	return 0;
}*/
