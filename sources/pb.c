/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 00:13:06 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/24 17:20:06 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_all *all)
{
	t_stack	*first;

	if (all->a)
	{
		first = all->a;
		all->a = first->next;
		first->next = all->b;
		all->b = first;
		ft_putstr_fd("pb\n", 1);
	}
}
