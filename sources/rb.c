/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 14:21:32 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/18 17:51:49 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_all *all)
{
	if (all->b)
	{
		ps_lstadd_back(&all->b, ps_lstnew(all->b->content));
		all->b = all->b->next;
		ft_putstr_fd("rb\n", 1);
		print_stacks(all->b);
	}
}
