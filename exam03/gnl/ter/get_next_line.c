/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 15:58:06 by rertzer           #+#    #+#             */
/*   Updated: 2023/04/02 16:32:47 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	buffer[BUFFER_SIZE];
	char	*line = NULL;
	static char	*remain;
	int		rd;

	while ((rd = read(fd, &buffer, BUFFER_SIZE)) > 0)
	{
		remain = ft_join(remain, buffer, rd);
		if ((line = ft_cut(&remain)) != NULL)
			return (line);
	}
	if ((line = ft_cut(&remain)) != NULL)
		return (line);
	return (remain);
}

int	ft_strlen(char *str)
{
	int	len = -1;

	if (!str)
		return (0);
	while (str[++len]);
	return (len);
}

char	*ft_strndup(char *src, int len)
{
	if (len == 0)
		return (NULL);
	char	*dest = malloc(len + 1);

	for (int i = 0 ; i < len ; i++)
		dest[i] = src[i];
	dest[len] = 0;
	return (dest);
}

char	*ft_join(char *remain, char *buffer, int rd)
{
	int		remlen = ft_strlen(remain);
	char	*newbee = malloc(remlen + rd + 1);
	
	for (int i = 0 ; i < remlen ; i++)
		newbee[i] = remain[i];
	for (int i = 0 ; i < rd ; i++)
		newbee[remlen + i] = buffer[i];
	newbee[remlen + rd] = 0;
	free(remain);
	return (newbee);
}

char	*ft_cut(char **remain)
{
	if (*remain == NULL)
		return (NULL);
	int		i = 0;
	int		remlen = ft_strlen(*remain);
	char	*line;
	char	*tmp;
	
	for (; i < remlen ; i++)
	{
		if ( (*remain)[i] == '\n')
			break ;
	}
	if (!(*remain)[i])
		return (NULL);
	i++;
	line = ft_strndup(*remain, i);
	tmp = ft_strndup(&((*remain)[i]), remlen - i);
	free(*remain);
	*remain = tmp;
	return (line);
}
