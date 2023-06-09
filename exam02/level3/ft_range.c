/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:58:29 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/20 16:20:27 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_getsize(int start, int end)
{	
	int	size = end - start;
	int sign = 1;
	if (size < 0)
		sign = -1;
	size *= sign;
	size++;

	return size;
}

int	*ft_range(int start, int end)
{
	int	size = end - start;
	int sign = 1;
	if (size < 0)
		sign = -1;
	size *= sign;
	size++;

	int	*tab = malloc(sizeof(int) * size);
	if (tab == NULL)
		return NULL;
	for (int i = 0 ; i < size ; i++)
		tab[i] = start + sign * i;
	return tab;
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc < 3)
		return 1;
	int start = atoi(argv[1]);
	int	end   = atoi(argv[2]);

	int	*tab = ft_range(start, end);
	for (int i = 0 ; i < ft_getsize(start, end) ; i++)
		printf("%d\n", tab[i]);
	free(tab);
	return 0;
}*/
