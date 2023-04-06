/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:44:29 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/20 12:09:18 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_toupper(char c)
{
	return (c >= 'a' && 'z') ? c - 32 : c;
}

int	main(int argc, char **argv)
{
	int		snake = 0;
	char	c = '\0';
	if (argc == 2)
	{
		char *str = argv[1];
		while (*str)
		{
			if (*str != '_')
			{
				if (snake)
				{
					c = ft_toupper(*str);
					snake = 0;
				}
				else
					c = *str;
				write(1, &c, 1);
			}
			else
				snake = 1;
			str++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
