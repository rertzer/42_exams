/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 10:55:29 by rertzer           #+#    #+#             */
/*   Updated: 2023/01/22 11:46:16 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int	ft_isspace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	count_words(char *str)
{
	int	count = 0;
	
	while (*str)
	{
		if (!ft_isspace(*str) && (ft_isspace(*(str + 1)) || *(str + 1) == '\0'))
			count++;
		str++;
	}
	return count;
}

char	*get_word(char *str, int start, int len)
{
	int i;
	char	*word = malloc(len + 1);
	if (NULL == word)
		return NULL;
	for (i = 0 ; i < len ; i++)
		word[i] = str[start + i];
	word[i] = '\0';
	return word;
}

char	**ft_split(char *str)
{
	int	words_nb = count_words(str);
	int	start = 0;
	int	i = -1;
	int	k = 0;

	char **splited  = malloc(sizeof(char *) * (words_nb + 1));
	if (NULL == splited)
		return NULL;
	while (*str && ft_isspace(*str))
			str++;
	while (str[++i])
	{
		if (ft_isspace(str[i]))
		{
			if (start < i)
				splited[k++] = get_word(str, start, i - start);
			start = i + 1;
		}
	}
	if (start != i)
		splited[k++] = get_word(str, start, i - start);
	splited[k] = '\0';
	return splited;
}
/*
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc < 1)
		return 1;
	char **spl = ft_split(argv[1]);
	int i = 0;
	while (spl[i])
	{
		printf("X%sX\n", spl[i]);
		free(spl[i]);
		i++;
	}
	free(spl);
	return 0;
}*/
