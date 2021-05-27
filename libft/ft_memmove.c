/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 18:36:26 by anolivei          #+#    #+#             */
/*   Updated: 2020/01/28 18:34:21 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *aux_dst;
	char *aux_src;

	aux_dst = dst;
	aux_src = (char *)src;
	if (dst > src)
	{
		aux_dst = aux_dst + len - 1;
		aux_src = aux_src + len - 1;
		while (len >= 1)
		{
			*aux_dst = *aux_src;
			aux_dst--;
			aux_src--;
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
