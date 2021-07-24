/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 19:42:25 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/24 00:42:08 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_all *all)
{
	char	*a;
	char	*b;

	if (all->b)
	{
		a = all->b->content;
		b = all->b->next->content;
		all->b->content = b;
		all->b->next->content = a;
		ft_putstr_fd("sb\n", 1);
	//	print_stacks(all->b);
	}
}
