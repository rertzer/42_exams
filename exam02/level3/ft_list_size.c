/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:45:43 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/20 15:56:14 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	nb = 0;

	while (begin_list)
	{
		nb++;
		begin_list = begin_list->next;
	}
	return nb;
}

/*
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	t_list	*top;
	t_list	*lst;

	lst = malloc(sizeof(t_list *));
	lst->next = NULL;
	top = lst;
	for (int i = 0 ; i < 44 ; i++)
	{
		lst->next = malloc(sizeof(t_list *));
		lst = lst->next;
		lst->next = NULL;
	}
	int nb = ft_list_size(top);
	printf("size : %d\n", nb);
	return 0;
}*/
