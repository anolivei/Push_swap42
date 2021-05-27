/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 06:13:05 by anolivei          #+#    #+#             */
/*   Updated: 2020/01/29 23:22:56 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	compare(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	init;
	char	*string;
	size_t	size;

	i = 0;
	if (s1 == 0 || set == 0)
		return (0);
	while (s1[i] != '\0' && compare(s1[i], set) == 1)
		i++;
	init = i;
	i = ft_strlen(s1) - 1;
	while (i > 0 && compare(s1[i], set) == 1)
		i--;
	size = i > init ? i - init + 1 : 0;
	string = (char*)malloc((size + 1) * sizeof(char));
	if (string != 0)
	{
		if (size == 0)
			string[0] = '\0';
		else
			ft_strlcpy(string, &s1[init], size + 1);
	}
	return (string);
}
