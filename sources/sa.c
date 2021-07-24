/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 19:42:09 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/24 00:42:18 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_all *all)
{
	char	*a;
	char	*b;

	if (all->a)
	{
		a = all->a->content;
		b = all->a->next->content;
		all->a->content = b;
		all->a->next->content = a;
		ft_putstr_fd("sa\n", 1);
	//	print_stacks(all->a);
	}
//	else
	//	ft_putstr_fd("no stack_a\n", 1);
}
