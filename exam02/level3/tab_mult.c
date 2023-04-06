/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 09:52:42 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/21 10:06:39 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int	ft_atoi(char *str)
{
	int	total = 0;

	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			total = total * 10 + *str - '0';
			str++;
		}
		else
			break ;
	}
	return total;
}

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	char c = n % 10 + '0';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	nb = ft_atoi(argv[1]);
		for(int i = 1 ; i < 10 ; i++)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nb);
			write(1, " = ", 3);
			int prod = nb * i;
			ft_putnbr(prod);
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
	return 0;
}
