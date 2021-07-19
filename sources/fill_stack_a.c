/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 01:34:53 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/18 23:00:05 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack_a(t_all *all)
{
	int	i;

	if (all->len)
	{
		i = all->len - 1;
		all->a = ps_lstnew(all->num[i]);
		while (i > 0)
		{
			i--;
			ps_lstadd_back(&all->a, ps_lstnew(all->num[i]));
		}
		print_stacks(all->a);
	}
}

void	print_stacks(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp)
	{
		printf("%d ", tmp->content);
		tmp = tmp->next;
	}
	printf("\n");
}
