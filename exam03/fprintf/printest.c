/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:27:15 by rertzer           #+#    #+#             */
/*   Updated: 2023/04/03 14:31:11 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.c"

int	main()
{
	ft_printf("%s\n", "toto");
	ft_printf("Magic %s is %d", "number", 42);
	ft_printf("Hexadecimal for %d if %x\n", 42, 42);
	ft_printf("null string is _%s_\n", NULL);
	ft_printf("neg is %d\n", -123456789);
	return (0);
}
