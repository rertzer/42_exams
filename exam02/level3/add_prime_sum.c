/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:12:28 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/20 14:42:29 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_atoi(char *str)
{
	unsigned int total = 0;
	

	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			total = total * 10 + *str - '0';
		else
			return 0;
		str++;
	}
	return total;
}

int	ft_isprime(unsigned int nb)
{
	if (nb < 2)
		return 0;

	for (unsigned int i = 2 ; i < nb / i + 1 ; i++)
	{
		if (nb % i == 0)
			return 0;
	}
	return 1;
}

void	ft_putnbr(unsigned int sum)
{
	if (sum > 9)
		ft_putnbr(sum / 10);
	char c = sum % 10 + '0';
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	unsigned int	sum = 0;
	unsigned int	nbr = 0;
	
	if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		for (unsigned int i = 2 ; i <= nbr ; i++)
		{
			if (ft_isprime(i))
				sum += i;
		}
	}
	ft_putnbr(sum);
	return 1;
}
