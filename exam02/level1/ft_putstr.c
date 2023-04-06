/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:35:48 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/18 10:44:34 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <unistd.h>

void	ft_putstr(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	write(1, str, len);
}

/*
int	main (int argc, char ** argv)
{
	if (argc == 1)
		return (1);

	ft_putstr(argv[1]);
	return (0);
}*/
