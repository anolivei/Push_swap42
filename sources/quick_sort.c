/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 22:43:44 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/24 18:19:36 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*cpy_vector(int len, int *num)
{
	int	*cpy;
	int	i;

	cpy = malloc((sizeof(int) * len) + 1);
	if (!cpy)
		exit(EXIT_FAILURE);
	i = 0;
	while (i < len)
	{
		cpy[i] = num[i];
		i++;
	}
	return (cpy);
}

int	*quick_sort(int len, int *num)
{
	int	*cpy;
	int	aux;
	int	i;

	cpy = cpy_vector(len, num);
	i = 0;
	while (i < len - 1)
	{
		if (cpy[i] > cpy[i + 1])
		{
			aux = cpy[i];
			cpy[i] = cpy[i + 1];
			cpy[i + 1] = aux;
			i = -1;
		}
		i++;
	}
	return (cpy);
}

int	*get_index(int len, int *num, int *cpy)
{
	int	*index;
	int	i;
	int	j;

	index = cpy_vector(len, num);
	i = 0;
	while (i < len)
	{
		j = 0;
		while (index[i] != cpy[j])
			j++;
		index[i] = j;
		i++;
	}
	return (index);
}

int	*link_index(int len, int *num)
{
	int	*cpy;
	int	*index;

	cpy = quick_sort(len, num);
	index = get_index(len, num, cpy);
	free(cpy);
	return (index);
}
