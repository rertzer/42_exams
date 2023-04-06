/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 09:42:56 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/24 09:27:37 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;
	t_list	*prev;

	prev = NULL;
	tmp = *begin_list;

	while (tmp)
	{
		if (!cmp(data_ref, tmp->data))
		{
			if (prev)
			{
				prev->next = tmp->next;
				free(tmp);
				tmp = prev->next;
			}
			else
			{
				*begin_list = tmp->next;
				free(tmp);
				tmp = *begin_list;
			}
		}
		else
		{
			prev = tmp;
			tmp = tmp->next;
		}
	}
}
/*
#include "unistd.h"

int	mycmp(void *a, void *b)
{
	if (*(char *)a == *(char *)b)
		return 0;
	return 1;
}

void	ftprint(t_list *lst)
{
	while (lst)
	{
		write(1, (char *)lst->data, 1);
		lst = lst->next;
	}
	write(1, "\n", 1);
}

int	main()
{
	t_list	*begin;
	t_list	*tmp;


	char *cref = malloc(1);
	cref[0] = 'k';
	char	*bref = malloc(1);
	bref[0] = 'a';
	begin = malloc(sizeof(t_list));
	
	begin->data = bref;
	begin->next = NULL;
	tmp = begin;
	for(int i = 1 ; i < 11 ; i++)
	{
		t_list *new = malloc(sizeof(t_list));
		char *xx = malloc(1);
		xx[0] = 'a' + i;
		new->data = xx;
		new->next = NULL;
		tmp->next = new;
		tmp = tmp->next;
	}
	ftprint(begin);
	ft_list_remove_if(&begin, (void *)cref, mycmp);
	ftprint(begin);
	free(cref);
	tmp = begin;
	while (tmp)
	{
		t_list	*nx = tmp->next;
		free(tmp->data);
		free(tmp);
		tmp = nx;
	}
	return 0;
}*/
