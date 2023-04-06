/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:32:34 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/18 17:02:56 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len = 0;

	while (str[len])
		len++;
	return len;
}

char	*ft_strdup(char *src)
{
	int i = 0;
	int	len = ft_strlen(src);

	char *dest = malloc(len + 1);
	if (dest == NULL)
		return NULL;
	for (i = 0 ; i < len ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return dest;
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc < 2)
		return 1;

	char *dup = ft_strdup(argv[1]);
	printf("moi:%s\n", dup);
	free(dup);
	dup = strdup(argv[1]);
	printf("ref:%s\n", dup);
	free(dup);
	return 0;
}*/
