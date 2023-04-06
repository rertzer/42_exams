/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:48:07 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/20 12:59:07 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	init_inside(int *inside)
{
	for (int i = 0 ; i < 256 ; i++)
		inside[i] = 0;
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int	inside[256];
		init_inside(inside);
		char c;
		for (int k = 1 ; k < 3 ; k++)
		{
			for (int i = 0 ; argv[k][i] ; i++)
			{
				c = argv[k][i];
				if (!inside[(int)c])
				{
					write(1, &c, 1);
					inside[(int)c] = 1;
				}
			}
		}
	}
	write(1, "\n", 1);
	return 0;
}
