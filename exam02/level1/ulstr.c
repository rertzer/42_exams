/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:47:03 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/18 12:54:41 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		for (int i = 0 ; argv[1][i] != '\0' ; i++)
		{
			char c = argv[1][i];
			if (c >= 'A' && c <= 'Z')
				c = c - 'A' + 'a';
			else if (c >= 'a' && c <= 'z')
				c = c - 'a' + 'A';
			write(1, &c, 1);
		}
	}
	write (1, "\n", 1);
	return 0;
}
