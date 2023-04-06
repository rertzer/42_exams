/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:03:56 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/20 14:05:17 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		char	*str1 = argv[1];
		char	*str2 = argv[2];

		while (*str2)
		{
			if (*str1 == *str2)
				str1++;
			str2++;
		}
		if (!*str1)
		{
			int len = 0;
			while (argv[1][len]) len++;
			write(1, argv[1], len);
		}
	}
	write(1, "\n", 1);
	return 0;
}
