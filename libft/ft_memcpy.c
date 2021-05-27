/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 21:17:07 by anolivei          #+#    #+#             */
/*   Updated: 2020/01/28 18:33:37 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*aux_dst;
	const char	*aux_src;

	aux_dst = dst;
	aux_src = src;
	i = 0;
	while (i < n && dst != src)
	{
		aux_dst[i] = aux_src[i];
		i++;
	}
	return (dst);
}
