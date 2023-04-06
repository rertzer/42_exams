/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:49:40 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/22 12:09:44 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int len = 0;
	while (*str++) len++;
	return len;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char	*str = argv[1];
		int end = ft_strlen(str);
		int first = 1;
		for (int i = end - 1 ; i >= 0 ; i--)
		{
			if (str[i] == ' ')
			{
				if (first)
					first = 0;
				else
					write(1, " ", 1);
				write(1, &str[i + 1], end - i - 1);
				end = i;
			}
		}
		if (first)
			first = 0;
		else
			write(1, " ", 1);
		write(1, &str[0], end);
		}
	write(1, "\n", 1);
	return 0;
}
