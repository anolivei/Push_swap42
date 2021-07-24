/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 14:21:32 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/24 00:42:35 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_all *all)
{
	t_stack	*first;
	t_stack	*last;

	if (all->b)
	{
		first = all->b;
		last = all->b;
		while (last->next != NULL)
			last = last->next;
		all->b = first->next;
		first->next = NULL;
		last->next = first;
		ft_putstr_fd("ra\n", 1);
	//	print_stacks(all->b);
	}
}
