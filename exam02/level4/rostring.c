/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 13:15:39 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/22 13:58:13 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ftspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return 1;
	return 0;
}

void	ftprint(char *str)
{
	while (*str)
	{
		if (!(ftspace(*str) && (ftspace(*(str + 1)) || *(str + 1) == '\0')))
			write(1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		int	word = 2;
		char *str = argv[1];
		int sp = 0;
		while (*str && ftspace(*str))
			str++;
		if (!*str)
			word = 0;
		else
		{
			while (str[sp] && !ftspace(str[sp])) sp++;
			while (str[sp] && ftspace(str[sp + 1])) sp++;
			if (str[sp] == '\0')
				word = 1;
		}
		str[sp] = '\0';
		if (word == 2)
		{
			ftprint(&str[sp + 1]);
			write(1, " ", 1);
		}
		if (word)
			ftprint(str);
	}
	write(1, "\n", 1);
	return 0;
}
