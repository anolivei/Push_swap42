/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 15:43:12 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/18 21:51:14 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_all *all)
{
	ft_putstr_fd("rr\n", 1);
	if (all->a)
	{
		ps_lstadd_back(&all->a, ps_lstnew(all->a->content));
		all->a = all->a->next;
		print_stacks(all->a);
	}
	if (all->b)
	{
		ps_lstadd_back(&all->b, ps_lstnew(all->b->content));
		all->b = all->b->next;
		print_stacks(all->b);
	}
}
