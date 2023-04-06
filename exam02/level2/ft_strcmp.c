/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:21:23 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/18 15:30:52 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc >= 3)
	{
		int diff = 666;

		diff = ft_strcmp(argv[1], argv[2]);
		printf("moi: %d\n", diff);
		diff = strcmp(argv[1], argv[2]);
		printf("ref: %d\n", diff);
	}
	return 0;
}*/
