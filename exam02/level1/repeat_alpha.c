/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:21:30 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/23 09:25:35 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	ft_time(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 1);
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 1);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];

		while (*str != '\0')
		{
			int time = ft_time(*str);
			for (int j = 0 ; j < time ; j++)
				write(1, str, 1);
			str++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
