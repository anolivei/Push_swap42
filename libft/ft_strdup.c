/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 03:30:02 by anolivei          #+#    #+#             */
/*   Updated: 2020/01/28 18:40:02 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	int		len;

	len = ft_strlen(s1) + 1;
	if ((cpy = ((char *)malloc(sizeof(char) * len))) != 0)
	{
		ft_strlcpy(cpy, s1, len);
		return (cpy);
	}
	return (0);
}
