/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 15:46:36 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/18 17:52:12 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_all *all)
{
	t_stack	node;
	t_stack	*lst;

	if (all->a)
	{
		node = *all->a;
		lst = ps_lstlast(all->a);
		all->a = ps_lstprevlast(all->a);
		all->a->next = NULL;
		all->a = &node;
		ps_lstadd_front(&all->a, ps_lstnew(lst->content));
		ft_putstr_fd("rra\n", 1);
		print_stacks(all->a);
	}
}
