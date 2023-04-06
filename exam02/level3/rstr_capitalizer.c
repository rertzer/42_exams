/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 09:33:52 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/21 09:47:53 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_issep(char c)
{
	if ((c >= 9 && c <= 13) || c == 32 || c == 0)
		return 1;
	return 0;
}

char	ft_up(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return c;
}

char	ft_down(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return c;
}

void	ft_rcap(char *str)
{
	char	c;
	while (*str)
	{
		if (ft_issep(*(str + 1)))
			c = ft_up(*str);
		else
			c = ft_down(*str);
		write(1, &c, 1);
		str++;
	}
	write(1, "\n", 1);
}


int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, "\n", 1);
		return 0;
	}
	for (int i = 1 ; i < argc ; i++)
		ft_rcap(argv[i]);
	return 0;
}
