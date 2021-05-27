/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 20:37:31 by anolivei          #+#    #+#             */
/*   Updated: 2020/01/31 20:50:40 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(const char *s, char c)
{
	int i;
	int n_word;
	int control;

	i = 0;
	control = 0;
	n_word = 0;
	while (s[0] != '\0' && s[i] != '\0')
	{
		if (s[i] != c && control == 0)
		{
			control = 1;
			n_word++;
		}
		else if (s[i] == c)
			control = 0;
		i++;
	}
	return (n_word);
}

static char		*string(const char *s, int init, int end)
{
	char	*string;
	int		i;

	i = 0;
	string = (char*)malloc((end - init + 1) * sizeof(char));
	while (end > init)
	{
		string[i] = s[init];
		i++;
		init++;
	}
	string[i] = '\0';
	return (string);
}

char			**ft_split(char const *s, char c)
{
	char	**split;
	int		init_w;
	size_t	i;
	size_t	j;

	if (s == 0)
		return (NULL);
	i = -1;
	j = 0;
	init_w = -1;
	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (split == 0)
		return (NULL);
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && init_w < 0)
			init_w = i;
		else if ((s[i] == c || i == ft_strlen(s)) && init_w >= 0)
		{
			split[j++] = string(s, init_w, i);
			init_w = -1;
		}
	}
	split[j] = NULL;
	return (split);
}
