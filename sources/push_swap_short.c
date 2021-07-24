/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_short.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 18:06:54 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/24 18:55:43 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Sort a stack with 5 or less numbers
*/

static int	pos_0_greater_pos_1(int pos_0, int pos_1, int pos_2, t_all *all)
{
	if (pos_1 > pos_2)
	{
		sa(all);
		rra(all);
		return (1);
	}
	if (pos_0 > pos_2)
	{
		ra(all);
		return (1);
	}
	else
	{
		sa(all);
		return (1);
	}
	return (0);
}

static int	pos_0_lower_pos_1(int pos_0, int pos_2, t_all *all)
{
	if (pos_0 > pos_2)
	{
		rra(all);
		return (1);
	}
	else
	{
		sa(all);
		ra(all);
		return (1);
	}
	return (0);
}

static int	three_numbers(t_all *all)
{
	int	pos_0;
	int	pos_1;
	int	pos_2;

	pos_0 = all->a->index;
	pos_1 = all->a->next->index;
	pos_2 = all->a->next->next->index;
	if (pos_0 < pos_1 && pos_1 < pos_2)
		return (1);
	if (pos_0 > pos_1)
	{
		pos_0_greater_pos_1(pos_0, pos_1, pos_2, all);
		return (1);
	}
	else
	{
		pos_0_lower_pos_1(pos_0, pos_2, all);
		return (1);
	}
	return (0);
}

void	short_push_swap(t_all *all, int *index)
{
	int	i;

	i = index[0];
	i = 0;
	if (all->len > 3)
	{
		while (all->a->index != 0)
			ra(all);
		pb(all);
		if (all->len == 5)
		{
			while (all->a->index != 1)
				ra(all);
			pb(all);
		}
	}
	three_numbers(all);
	if (all->len == 4)
		pa(all);
	if (all->len == 5)
	{
		pa(all);
		pa(all);
	}
}
