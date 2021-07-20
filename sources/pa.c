/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 00:13:06 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/20 00:25:29 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_all *all)
{
	t_stack	*first;

	if (all->a)
	{
		first = all->a;
		all->a = first->next;
		first->next = all->b;
		all->b = first;
		ft_putstr_fd("pa\n", 1);
		print_stacks(all->a);
		print_stacks(all->b);
	}
}
