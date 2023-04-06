/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:22:04 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/18 14:33:50 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	ft_tolower(char c)
{
	if (ft_isupper(c))
		c = c - 'A' + 'a';
	return c;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		for (int i = 0 ; argv[1][i] != '\0' ; i++)
		{
			if (ft_isupper(argv[1][i]))
				write(1, "_", 1);
			char c = ft_tolower(argv[1][i]);
			write(1, &c, 1);
		}
	}
	write(1, "\n", 1);
	return 0;

}
