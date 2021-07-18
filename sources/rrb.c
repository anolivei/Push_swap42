/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 16:13:53 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/18 17:52:29 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_all *all)
{
	t_stack	node;
	t_stack	*lst;

	if (all->b)
	{
		node = *all->b;
		lst = ps_lstlast(all->b);
		all->b = ps_lstprevlast(all->b);
		all->b->next = NULL;
		all->b = &node;
		ps_lstadd_front(&all->b, ps_lstnew(lst->content));
		ft_putstr_fd("rrb\n", 1);
		print_stacks(all->b);
	}
}
