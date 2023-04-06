/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:31:39 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/18 12:42:15 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return len;
}

char	ft_replace(char a, char b, char c)
{
	return (a == b) ? c : a;
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
		{
			for (int i = 0 ; argv[1][i] != '\0' ; i++)
			{
				char c = ft_replace(argv[1][i], argv[2][0], argv[3][0]);
				write(1, &c, 1);
			}
		}
	}
	write(1, "\n", 1);
	return 0;
}
