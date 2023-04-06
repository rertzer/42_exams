/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 11:11:09 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/21 11:42:38 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_isprime(int nb)
{
	
	if (nb < 2)
		return 0;
	if (nb == 2)
		return 1;
	if (nb % 2 == 0)
		return 0;
	for (int i = 3 ; i < nb / i ; i += 2)
	{
		if (nb % i == 0)
			return 0;
	}
	return 1;
}

int	main(int argc, char **argv)
{
	int	first = 1;
	int	i = 2;

	if (argc == 2)
	{
		int nb = atoi(argv[1]);
		if (nb < 4)
		{
			printf("%d\n", nb);
			return 0;
		}
		while (i <= nb)
		{
			if(ft_isprime(i))
			{
				while (nb % i == 0)
				{
					if (first)
					{
						printf("%d", i);
						first = 0;
					}
					else
						printf("*%d", i);
					nb /= i;
				}
			}
			i++;
		}
	}
	printf("\n");
	return 0;
}
