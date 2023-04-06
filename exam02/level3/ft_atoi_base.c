/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:13:15 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/20 15:40:34 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_tolower(char c)
{
	return (c >= 'A' && c <= 'Z') ? c + 32 : c;
}

int	digit(char c, int str_base)
{
	int	i = -1;
	char	base[] = "0123456789abcdef";

	for (i = 0 ; i < str_base ; i++)
	{
		if (ft_tolower(c) == base[i])
			break;
	}
	return i;
}

int	ft_atoi_base(const char *str, int str_base)
{
	const char	*nbr = str;
	int		sign = 1;
	int		total = 0;
	int		n = 0;

	if (*nbr == '-')
	{
		sign = -1;
		nbr++;
	}
	while (*nbr)
	{
		n = digit((char)*nbr, str_base);
		if (n == -1)
			break ;
		total = total * str_base + n;
		nbr++;
	}
	return sign * total;
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc < 3)
		return 1;
	int	nb = ft_atoi_base(argv[1], atoi(argv[2]));
	printf("nb: %d\n", nb);
}
