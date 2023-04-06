/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:18:20 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/22 15:25:17 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	char c = '0' + nb % 10;
	write(1, &c, 1);
}

int	main(void)
{
	for (int i = 1 ; i < 101 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
				write(1, "fizz", 3);
			if (i % 5 == 0)
				write(1, "buzz", 3);
		}
		else
			ft_putnbr(i);
		write(1, "\n", 1);
	}
		return 0;
}
