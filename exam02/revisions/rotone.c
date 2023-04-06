/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 16:17:27 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/22 16:21:31 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		while (*str)
		{
			if ((*str >= 'A' && *str < 'Z') || (*str >= 'a' && *str < 'z'))
				(*str)++;
			else if (*str == 'Z' || *str == 'z')
				(*str) -= 25;
			write(1, str, 1);
			str++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
