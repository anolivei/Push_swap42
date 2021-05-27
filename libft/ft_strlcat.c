/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 23:42:31 by anolivei          #+#    #+#             */
/*   Updated: 2020/01/30 02:19:39 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t count_d;
	size_t count_s;
	size_t sum;
	size_t put;

	count_d = ft_strlen(dst);
	count_s = ft_strlen(src);
	put = 0;
	if (dstsize > count_d)
		sum = count_d + count_s;
	else
		sum = dstsize + count_s;
	while (src[put] != '\0' && count_d < (dstsize - 1) && dstsize > 0)
	{
		dst[count_d] = src[put];
		count_d++;
		put++;
	}
	if (count_d <= dstsize)
		dst[count_d] = '\0';
	return (sum);
}
