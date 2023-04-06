/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:08:22 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/18 17:29:47 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_inside(char c, const char *s2)
{
	for (int i = 0 ; s2[i] ; i++)
	{
		if (c == s2[i])
			return 1;
	}
	return 0;
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	char *brk = NULL;

	for (int i = 0 ; s1[i] ; i++)
	{
		if (ft_inside(s1[i], s2))
			{
				brk = (char *)(char *)  &s1[i];
				break ;
			}
	}
	return brk;
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc < 3)
		return 1;
	const char *brk = ft_strpbrk(argv[1], argv[2]);
	printf("moi:%s\n", brk);
	brk = strpbrk(argv[1], argv[2]);
	printf("ref:%s\n", brk);
	return 0;
}*/
