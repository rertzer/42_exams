/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:48:04 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/20 10:59:12 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int	max = *tab;

	if (len == 0)
		return 0;

	for(unsigned int i = 0 ; i < len ; i++)
	{
		if (tab[i] > max)
			max = tab[i];
	}
	return max;
}

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int	nbs[] = {0};//{1, 3, 5, 7, -89, 32, 4, -3, 0, -444444};
	int nb = max(nbs, 0);
	printf("max: %d\n", nb);
	return 0;
}
