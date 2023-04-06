/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 09:22:49 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/23 09:10:30 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	not_space(char c)
{
	if (c == ' ' || c ==  '\t' || c == '\0')
		return (0);
	return (1);
}


int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while (!not_space(argv[1][i]))
				i++;
		while (not_space(argv[1][i]))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
		write(1, "\n", 1);
		return (0);
}
