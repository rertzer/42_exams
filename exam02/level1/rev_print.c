/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:41:07 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/18 11:46:42 by rertzer          ###   ########.fr       */
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

int	main(int argc, char** argv)
{
	if (argc == 2)
	{
		int len = ft_strlen(argv[1]);
		for (int i = len - 1 ; i >= 0 ; i--)
			write(1, &argv[1][i], 1);
	}
	write(1, "\n", 1);
	return 0;
}
