/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:38:49 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/22 17:55:08 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int len = 0;
	while (*str++) len++;
	return len;
}

int	ft_isspace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		int len = ft_strlen(str) - 1;
		while (len >= 0 && ft_isspace(str[len]))
		{
			str[len] = '\0';
			len--;
		}
		if (len >= 0)
		{
			char *start = str;
			while (*str)
			{
				if (ft_isspace(*str))
						start = str + 1;
				str++;
			}
			write(1, start, ft_strlen(start));
		}
	}
	write(1, "\n", 1);
	return 0;
}
