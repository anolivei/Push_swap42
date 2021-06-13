/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 18:36:26 by anolivei          #+#    #+#             */
/*   Updated: 2021/06/13 16:34:56 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*aux_dst;
	char	*aux_src;

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
