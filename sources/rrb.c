/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 16:13:53 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/24 00:42:27 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_all *all)
{
	t_stack	*prev_last;
	t_stack	*last;

	if (all->b)
	{
		last = all->b;
		prev_last = NULL;
		while (last->next != NULL)
		{
			prev_last = last;
			last = last->next;
		}
		prev_last->next = NULL;
		last->next = all->b;
		all->b = last;
		ft_putstr_fd("rra\n", 1);
	//	print_stacks(all->b);
	}
}
