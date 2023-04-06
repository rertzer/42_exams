/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 09:17:01 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/20 09:33:27 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int	inaccept(const char c, const char *accept)
{
	while (*accept)
	{
		if (c == *accept)
			return 1;
		accept++;
	}
	return 0;
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	len = 0;

	while (s[len] && inaccept(s[len], accept)) len++;
	return len;
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc < 3)
		return 1;
	int len = ft_strspn(argv[1], argv[2]);
	printf("moi:%d\n", len);
	len = strspn(argv[1], argv[2]);
	printf("ref:%d\n", len);
	return 0;
}*/
