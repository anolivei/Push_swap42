/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 01:34:53 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/17 02:42:50 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack(t_all *all)
{
	int		i;
	t_stack	*lst;

	i = all->len - 1;
	all->a = ps_lstnew(all->num[i]);
	while (i > 0)
	{
		i--;
		ps_lstadd_back(&all->a, ps_lstnew(all->num[i]));
	}
	lst = all->a;
	while (lst)
	{
		printf("%i ", lst->content);
		lst = lst->next;
	}
	printf("\n");
	lst = all->a;
	while (lst)
	{
		printf("%i ", lst->content);
		lst = lst->previous;
	}
}
