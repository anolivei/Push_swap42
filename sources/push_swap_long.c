/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_long.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 23:46:40 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/24 18:55:24 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Sort a stack with more than 5 numbers
*/

void	long_push_swap(t_all *all)
{
	int	i;

	all->limit = find_limit(all->len);
	i = 0;
	while (all->limit >= 0)
	{
		while (i < all->len)
		{
			if (all->a->content[all->limit] == '0')
				pb(all);
			else
				ra(all);
			i++;
		}
		while (all->b)
			pa(all);
		all->limit--;
		i = 0;
	}
}
