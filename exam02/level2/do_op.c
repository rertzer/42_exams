/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:41:03 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/18 14:53:05 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[3]);
		if (argv[2][0] == '+')
			b = a + b;
		else if (argv[2][0] == '-')
			b = a - b;
		else if (argv[2][0] == '*')
			b = a * b;
		else if (argv[2][0] == '/')
			b = a / b;
		printf("%d", b);
	}
	printf("\n");
	return 0;
}
