/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 17:55:22 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/18 22:56:56 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_all *all)
{
	t_stack	*prev_last;
	t_stack	*last;

	ft_putstr_fd("rrr\n", 1);
	if (all->a)
	{
		last = all->a;
		prev_last = NULL;
		while (last->next != NULL)
		{
			prev_last = last;
			last = last->next;
		}
		prev_last->next = NULL;
		last->next = all->a;
		all->a = last;
		print_stacks(all->a);
	}
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
		print_stacks(all->b);
	}
}
