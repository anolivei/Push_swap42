/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 23:58:36 by anolivei          #+#    #+#             */
/*   Updated: 2020/01/28 18:33:03 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*aux_s;

	aux_s = s;
	i = 0;
	while (i < n)
	{
		if (aux_s[i] == c)
			return ((void *)&aux_s[i]);
		i++;
	}
	return (0);
}
