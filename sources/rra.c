/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 15:46:36 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/24 18:52:10 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Bottom number in A goes to top of A
*/

void	rra(t_all *all)
{
	t_stack	*prev_last;
	t_stack	*last;

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
		ft_putstr_fd("rra\n", 1);
	}
}
