/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 03:30:02 by anolivei          #+#    #+#             */
/*   Updated: 2021/06/13 16:33:16 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	int		len;

	len = ft_strlen(s1) + 1;
	cpy = ((char *)malloc(sizeof(char) * len));
	if (!cpy)
		return (0);
	if (cpy != 0)
	{
		ft_strlcpy(cpy, s1, len);
		return (cpy);
	}
	return (0);
}
