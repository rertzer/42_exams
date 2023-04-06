/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 14:00:25 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/22 14:33:37 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	int	tmp;

	for (int i = size - 1; i > 0 ; i--)
	{
		int	max_idx = i;
		for (int j = 0 ; j < i; j++)
		{
			if (tab[j] > tab[max_idx])
				max_idx = j;
		}
		tmp = tab[i];
		tab[i] = tab[max_idx];
		tab[max_idx] = tmp;
	}
}
/*
#include <stdio.h>

int	main()
{
	int	tab[] = {4, 5, -6, 0, 1, 44, 7, -28, -9, 0, 111, 99, 77, -31, 2};

	sort_int_tab(tab, 15);
	for (int i = 0 ; i < 15 ; i++)
	{
		printf("%d, ", tab[i]);
	}
	printf("\n");
	return 0;
}*/
