/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 00:13:12 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/24 18:53:25 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Top number in B goes to top of A
*/

void	pa(t_all *all)
{
	t_stack	*first;

	if (all->b)
	{
		first = all->b;
		all->b = first->next;
		first->next = all->a;
		all->a = first;
		ft_putstr_fd("pa\n", 1);
	}
}
