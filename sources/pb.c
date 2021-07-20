/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 00:13:12 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/20 00:37:20 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_all *all)
{
	t_stack	*first;

	if (all->b)
	{
		first = all->b;
		all->b = first->next;
		first->next = all->a;
		all->a = first;
		ft_putstr_fd("pb\n", 1);
		print_stacks(all->a);
		print_stacks(all->b);
	}
}
