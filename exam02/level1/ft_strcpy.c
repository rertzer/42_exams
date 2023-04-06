/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:46:55 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/18 11:02:27 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char * str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

char * ft_strcpy(char *dest, const char *src)
{
	size_t i;

   for (i = 0; src[i] != '\0'; i++)
	   dest[i] = src[i];
	dest[i] = '\0';

   return (dest);
}

/*
int	main(int argc, char **argv)
{
	int		len;
	char	*copy;

	if (argc == 1)
		return (1);
	
	len = ft_strlen(argv[1]);
	copy = malloc(len);
	copy = ft_strcpy(copy, argv[1]);
	printf("my :%s\n", copy);
	copy = strcpy(copy, argv[1]);
	printf("ref:%s\n", copy);
	free(copy);
}*/
