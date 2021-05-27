/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 02:58:14 by anolivei          #+#    #+#             */
/*   Updated: 2020/01/29 23:46:18 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;
	size_t	i;
	size_t	len;

	i = 0;
	len = count * size;
	memory = malloc(len);
	if (memory == 0)
		return (0);
	while (len > 0)
	{
		((char *)memory)[i] = 0;
		i++;
		len--;
	}
	return (memory);
}
