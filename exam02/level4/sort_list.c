/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 14:35:02 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/22 14:52:57 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int	sorted = 0;

	while (!sorted)
	{
		t_list	*tmp = lst;
		sorted = 1;
		while (tmp)
		{
			if (tmp->next && !cmp(tmp->data, tmp->next->data))
			{
				int	n = tmp->data;
				tmp->data = tmp->next->data;
				tmp->next->data = n;
				sorted = 0;
			}
			tmp = tmp->next;
		}
	}
	return lst;
}
/*
#include <stdlib.h>
#include <stdio.h>

void	printlst(t_list *lst)
{
	while (lst)
	{
		printf("%d, ", lst->data);
		lst = lst->next;
	}
	printf("\n");
}

int	mycmp(int a, int b)
{
	return (a <= b);
}

int main()
{
	t_list	*begin;
	begin = malloc(sizeof(t_list));
	begin->data = 3;
	begin->next = NULL;
	t_list *tmp = begin;
	for (int i = 0 ; i < 13 ; i++)
	{
		tmp->next = malloc(sizeof(t_list));
		tmp->next->data = (33 - i) % 7;
		tmp->next->next = NULL;
		tmp = tmp->next;
	}
	printlst(begin);
	begin = sort_list(begin, mycmp);
	printlst(begin);
}*/
