/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:41:49 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/18 17:56:15 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrev(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	for (int i = 0 ; i < len / 2 ; i++)
	{
		char t = str[len - i - 1];
		str[len - i -1] = str[i];
		str[i] = t;
	}
	return str;
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 1)
		return 1;
	printf("avant:X%sX\n", argv[1]);
	argv[1] = ft_strrev(argv[1]);
	printf("apres:X%sX\n", argv[1]);
	return 0;
}*/
