/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:00:10 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/18 11:05:29 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len = 0;
	while (str[len] != '\0')
		len++;
	return len;
}

/*
int	main(int argc, char **argv)
{
	if (argc == 1)
		return (1);
	int len = ft_strlen(argv[1]);
	printf("len: %d\n", len);
	return (0);
}*/
