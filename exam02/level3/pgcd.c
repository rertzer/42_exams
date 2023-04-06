/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:00:08 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/20 17:10:38 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		if (a == b)
			printf("%d", b);
		else
		{
			while (b != 0)
			{
				int r = a % b;
				a = b;
				b = r;
			}
			printf("%d", a);
		}
	}
	printf("\n");
}
