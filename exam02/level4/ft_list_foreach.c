/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 09:15:17 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/22 09:39:19 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		f(begin_list->data);
		begin_list = begin_list->next;
	}
}
/*
typedef void (*f)(void *);
#include <unistd.h>
#include <stdlib.h>

void	ftprint(void *v)
{
	write(1, v, 1);
}

int	main()
{
	t_list	toto;
	t_list	*nxt;

	char	c[] = "abcdefghijklmnop";

	toto.data = &c[0];
	toto.next = NULL;
	nxt = &toto;
	for (int i = 1 ; i < 10 ; i++)
	{
		nxt->next = malloc(sizeof(t_list));
		nxt->next->data = &c[i];
		nxt->next->next = NULL;
		nxt = nxt->next;
	}
	ft_list_foreach(&toto, ftprint);
	nxt = toto.next;
	for (int i = 1 ; i < 10 ; i++)
	{
		t_list	*tmp = nxt->next;
		free(nxt);
		nxt = tmp;
	}
}*/
