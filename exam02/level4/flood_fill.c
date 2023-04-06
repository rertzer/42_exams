/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 10:22:21 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/21 11:07:01 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void	flood_fill(char **tab, t_point size, t_point begin)
{
	static char c = '\0';
	if (!c)
		c = tab[begin.y][begin.x];

	if (begin.x < 0 || begin.x >= size.x || begin.y < 0 || begin.y >= size.y \
			|| tab[begin.y][begin.x] != c)
		return ;
	
	tab[begin.y][begin.x] = 'F';

	flood_fill(tab, size, (t_point){begin.x - 1, begin.y});
	flood_fill(tab, size, (t_point){begin.x + 1, begin.y});
	flood_fill(tab, size, (t_point){begin.x, begin.y - 1});
	flood_fill(tab, size, (t_point){begin.x, begin.y + 1});
}
