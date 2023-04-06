/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:09:48 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/20 15:10:03 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(char c)
{
	return (c >= 9 && c <= 13) || c == 32;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char	*str = argv[1];
		while (*str && ft_isspace(*str)) str++;
		int		len = 0;
		while (str[len]) len++;
		while (len && ft_isspace(str[len - 1]))
		{
			str[len - 1] = '\0';
			len--;
		}
		while (*str)
		{
			if (ft_isspace(*str))
			{
				if (!ft_isspace(*(str + 1)))
					write(1, "   ", 3);
			}
			else
				write(1, str, 1);
			str++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
