/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 22:28:24 by anolivei          #+#    #+#             */
/*   Updated: 2020/01/28 18:32:49 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst,
		const void *restrict src, int c, size_t n)
{
	size_t			i;
	unsigned char	*aux_dst;
	unsigned char	*aux_src;

	aux_dst = (unsigned char *)dst;
	aux_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		aux_dst[i] = aux_src[i];
		if (aux_src[i] == (unsigned char)c)
			return (&aux_dst[i + 1]);
		i++;
	}
	return (0);
}
