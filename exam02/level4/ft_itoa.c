/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 11:46:42 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/21 12:17:24 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_size(unsigned int nb, int sign)
{
	int	size = 0;

	if (nb == 0)
		return 1;
	while (nb)
	{
		nb /= 10;
		size++;
	}
	if (sign == -1)
		size++;
	return size;
}

void	ft_feed(char *str, unsigned int nb, int size)
{
	for (int i = size - 1 ; i >= 0 ; i--)
	{
		str[i] = nb % 10 + '0';
		nb /= 10;
	}
}

char	*ft_itoa(int nbr)
{
	unsigned int	nb = 0;
	int				sign = 1;
	int				size = 0;
	char			*str = NULL;

	if (nbr < 0)
		sign = -1;
	nb = sign * nbr;
	
	size = ft_size(nb, sign);
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return NULL;
	str[size] = '\0';

	if (sign == -1)
	{
		str[0] = '-';
		ft_feed(&str[1], nb, size - 1);
	}
	else
		ft_feed(str, nb, size);
	return str;
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
		return 1;

	int		nb = atoi(argv[1]);
	char	*str = ft_itoa(nb);

	printf("%s\n", str);
	free(str);
	return 0;
}*/
