/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:50:05 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/18 12:07:10 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_roter(char c)
{
	if (c >= 'A' && c <= 'Z')
		return ((c - 'A' + 13 ) % 26 + 'A');
	if (c >= 'a' && c <= 'z')
		return ((c - 'a' + 13) % 26 + 'a');
	return (c);
}

int	main(int argc , char ** argv)
{
	if (argc == 2)
	{
		for (int i = 0 ; argv[1][i] != '\0' ; i++)
		{
			char c = ft_roter(argv[1][i]);
			write (1, &c, 1);
		}
	}
	write(1, "\n", 1);
	return 0;
}
