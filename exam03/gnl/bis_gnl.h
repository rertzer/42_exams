/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bis_gnl.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 13:53:09 by rertzer           #+#    #+#             */
/*   Updated: 2023/04/04 09:11:28 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIS_GNL_H
# define BIS_GNL_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
# 	define BUFFER_SIZE 1 
# endif

char	*get_next_line(int fd);
char	*ft_join(char *remain, char *buffer, int rd);
char	*ft_cut(char **remain);
#endif
