/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 03:31:38 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/18 04:24:06 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_all *all)
{
	ps_lstadd_back(&all->a, ps_lstnew(all->a->content));
	all->a = all->a->next;
	ft_putstr_fd("ra\n", 1);
	print_stacks(all->a);
}
