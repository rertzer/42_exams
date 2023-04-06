/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 09:35:23 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/20 09:54:33 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	init_inside(int *inside)
{
	for (int i = 0 ; i < 256 ; i++)
		inside[i] = 0;
}

int	is_inside(char c, char *str)
{
	while (*str)
	{
		if (c == *str)
			return 1;
		str++;
	}
	return 0;
}

int	main(int argc, char **argv)
{
	int	inside[256];

	if (argc == 3)
	{
		init_inside(inside);
		char *str1 = argv[1];
		char *str2 = argv[2];
		while (*str1)
		{
			if (is_inside(*str1, str2) && inside[(int)*str1] == 0)
			{
				write(1, str1, 1);
				inside[(int)*str1] = 1;
			}
			str1++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
