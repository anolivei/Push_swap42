/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 15:43:19 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/18 21:50:40 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_all *all)
{
	int	a;
	int	b;

	ft_putstr_fd("ss\n", 1);
	if (all->a)
	{
		a = all->a->content;
		b = all->a->next->content;
		all->a->content = b;
		all->a->next->content = a;
		print_stacks(all->a);
	}
	if (all->b)
	{
		a = all->b->content;
		b = all->b->next->content;
		all->b->content = b;
		all->b->next->content = a;
		print_stacks(all->b);
	}
}
