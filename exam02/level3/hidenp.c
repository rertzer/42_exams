/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:26:57 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/20 16:35:41 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		char	*str1 = argv[1];
		char	*str2 = argv[2];
		char	c = '1';

		while (*str2)
		{
			if (*str1 == *str2)
				str1++;
			str2++;
		}
		if (*str1)
			c = '0';
		write(1, &c, 1);
	}
	write(1, "\n", 1);
	return 0;
}
