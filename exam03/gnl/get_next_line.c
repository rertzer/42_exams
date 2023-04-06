/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 09:36:10 by rertzer           #+#    #+#             */
/*   Updated: 2023/02/20 17:45:39 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_buffcpy(buff_t *buffy, char *line, int nl)
{
	int	i;

	for (i = 0 ; i < nl; i++)
		line[i] = buffy->buffer[i];
	line[i] = 0;
}

void	ft_buffmove(buff_t *buffy, int nl)
{
	int	i;
	for (i = 0 ; i < (buffy->size - nl) ; i++)
		buffy->buffer[i] = buffy->buffer[nl + i];
	for (; i < buffy->size ; i++)
		buffy->buffer[i] = 0;
	buffy->size -= nl;
	buffy->offset = buffy->size;
}

int	ft_getnl(buff_t *buffy)
{
	for (int i = buffy->offset ; i < buffy->size ; ++i)
	{
		if (buffy->buffer[i] == '\n')
			return (i + 1);
	}
	return (0);
}

char	*get_next_line(int fd)
{
	static buff_t	buffy;

	int		rd = -1;
	int		nl = 0;
	char	*line = NULL;

	rd = read(fd, &(buffy.buffer[buffy.offset]), BUFFER_SIZE);
	while ( rd > 0)
	{
		buffy.size += rd; 
		if ((nl = ft_getnl(&buffy)) > 0)
		{
			line = malloc(nl + 1);
			ft_buffcpy(&buffy, line, nl);
			ft_buffmove(&buffy, nl);
			return (line);
		}
		buffy.offset += rd;
		rd = read(fd, &(buffy.buffer[buffy.offset]), BUFFER_SIZE);
	}
	if (rd == 0 && buffy.size > 0)
	{
		line = malloc(buffy.size + 1);
		ft_buffcpy(&buffy, line, buffy.size);
		buffy.size = 0;
		return (line);
	}
	return (NULL);
}
