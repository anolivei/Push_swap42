/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 03:31:38 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/24 00:42:38 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_all *all)
{
	t_stack	*first;
	t_stack	*last;

	if (all->a)
	{
		first = all->a;
		last = all->a;
		while (last->next != NULL)
			last = last->next;
		all->a = first->next;
		first->next = NULL;
		last->next = first;
		ft_putstr_fd("ra\n", 1);
	//	print_stacks(all->a);
	}
}
