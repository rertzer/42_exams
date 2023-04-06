/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:19:34 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/20 10:46:24 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32) ? 1 : 0;
}

int	main(int argc, char **argv)
{

	if (argc == 2)
	{
		char	*ptr = argv[1];
		char	*last = ptr;
		while (*ptr)
		{
			if (ft_isspace(*ptr) && !ft_isspace(*(ptr + 1)) && *(ptr + 1))
				last = ptr;
			ptr++;
		}
		while (*last)
		{
			if (!ft_isspace(*last))
				write(1, last, 1);
			last++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
