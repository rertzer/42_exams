/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:33:09 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/18 16:27:48 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_inreject(char c, const char *reject)
{
	for (int i = 0 ; reject[i] ; i++)
	{
		if (c == reject[i])
			return 1;
	}
	return 0;
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i = 0;
	for (i = 0 ; s[i] ; i++)
	{
		if (ft_inreject(s[i], reject))
			break ;
	}
	return i;
}

# include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		int i = ft_strcspn(argv[1], argv[2]);
		printf("moi: %d\n", i);
		i = strcspn(argv[1], argv[2]);
		printf("ref: %d\n", i);
	}
	return 0;
}
