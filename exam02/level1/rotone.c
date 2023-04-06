/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:11:53 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/18 12:23:59 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_next(char c)
{
	if ((c >= 'A' && c <= 'Y') || (c >= 'a' && c <= 'y'))
		c++;
	else if (c == 'Z' || c == 'z')
		c -= 25;
	return c;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		for (int i = 0 ; argv[1][i] != '\0' ; i++)
		{
			char c = ft_next(argv[1][i]);
			write(1, &c, 1);
		}
	}
	write(1, "\n", 1);
	return 0;
}
