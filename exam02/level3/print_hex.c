/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 09:12:54 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/21 09:24:36 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_atoi(char *str)
{
	unsigned int	total = 0;

	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			total = total * 10 + *str - '0';
		else
			return total;
		str++;
	}
	return total;
}

void	ft_puthexa(unsigned int nb)
{
	char	hex[] = "0123456789abcdef";

	if (nb > 15)
		ft_puthexa(nb / 16);
	unsigned int r = nb % 16;
	write(1, &hex[r], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		unsigned int	nb = ft_atoi(argv[1]);
		ft_puthexa(nb);
	}
	write(1, "\n", 1);
	return 0;
}
