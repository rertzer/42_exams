/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bis_gnl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 13:56:52 by rertzer           #+#    #+#             */
/*   Updated: 2023/04/02 15:44:21 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bis_gnl.h"

int	ft_strlen(char *str)
{
	int	i = 0;

	if (!str)
		return (0);
	for (; str[i] ; i++);
	return (i);
}

char	*ft_strndup(char *src, int len)
{
	if (len == 0)
		return NULL;
	char *dest = malloc(len + 1);
	for (int i = 0 ; i < len ; i++)
		dest[i] = src[i];
	dest[len] = 0;
	return (dest);
}

char	*get_next_line(int fd)
{
	int				rd;
	static char		*remain;
	char			*line = NULL;
	char			buffer[BUFFER_SIZE];

	while ((rd = read(fd, &buffer, BUFFER_SIZE)) > 0)
	{
		if ((remain = ft_join(remain, buffer, rd)) == NULL) return (NULL);
		if ((line = ft_cut(&remain)) != NULL) return (line);
	}
	if ((line = ft_cut(&remain)) != NULL) return (line);
	return (remain);
}

char	*ft_join(char *remain, char *buffer, int rd)
{
	char	*tmp;
	int		len = ft_strlen(remain);

	if ((tmp = malloc(len + rd + 1)) == NULL)
		return (NULL);
	for (int i = 0 ; i < len ; i++)
		tmp[i] = remain[i];
	for (int i = 0 ; i < rd ; i++)
		tmp[len + i] = buffer[i];
	tmp[len + rd] = 0;
	free(remain);
	return (tmp);
}
	
char	*ft_cut(char **remain)
{
	int		i = -1;
	int		rem_size;
	char	*line;
	char	*newrem;

	if (*remain == NULL)
		return (NULL);
	while ((*remain)[++i])
	{
		if ((*remain)[i] == '\n')
			break ;
	}
	if (!(*remain)[i])
		return (NULL);
	rem_size = ft_strlen(*remain) - (i + 1) ;
	line = ft_strndup(*remain, i + 1);
	newrem = ft_strndup(&((*remain)[i + 1]), rem_size);
	free(*remain);
	*remain = newrem;
	return line;
}
