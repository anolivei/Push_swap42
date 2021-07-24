/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 23:46:40 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/24 01:25:34 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	push_swap(t_all *all)
{
	int i;

	all->limit = find_limit(all->len);
	i = 0;
	while (all->limit >= 0)
	{
		while(i < all->len)
		{
			if (all->a->content[all->limit] == '0')
				pb(all);
			else
				ra(all);
			i++;
		}
		while (all->b)
			pa(all);
		all->limit--;
		i = 0;
	}
//	printf("A\n");
//	print_stacks(all->a);
//	printf("B\n");
//	print_stacks(all->b);
}