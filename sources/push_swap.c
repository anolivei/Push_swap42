/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 23:46:40 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/24 17:34:42 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	push_swap(t_all *all, int *index)
{
	if (all->len <= 5)
		short_push_swap(all, index);
	else
		long_push_swap(all);
}

static int	three_numbers(t_all *all)
{
	int	pos_0;
	int	pos_1;
	int	pos_2;
	
	pos_0 = all->a->index;
	pos_1 = all->a->next->index;
	pos_2 = all->a->next->next->index;
//	printf("pos 0 %d\n", pos_0);
//	printf("pos 1 %d\n", pos_1);
//	printf("pos 2 %d\n", pos_2);
	if(pos_0 < pos_1 && pos_1 < pos_2)
		return(0);
	if (pos_0 > pos_1)
	{
		if (pos_1 > pos_2)
		{
			sa(all);
			rra(all);
			return (1);
		}
		if (pos_0 > pos_2)
		{
			ra(all);
			return (1);
		}
		else
		{
			sa(all);
			return (1);
		}
	}
	else
	{
		if (pos_0 > pos_2)
		{
			rra(all);
			return(1);
		}
		else
		{
			sa(all);
			ra(all);
			return (1);
		}
	}
	return (0);
	
/*	if (index[0] > index[1])
	{
		if (index[1] > index[2])
		{
			sa(all);
			rra(all);
			return (1);
		}
		if (index[0] > index[2])
		{
			ra(all);
			return (1);
		}
		else
		{
			sa(all);
			return (1);
		}
	}
	else
	{
		if (index[0] > index[2])
		{
			rra(all);
			return(1);
		}
		else
		{
			sa(all);
			ra(all);
			return (1);
		}
	}
	return (0);*/
}

void	short_push_swap(t_all *all, int *index)
{
	int	i;
	
	i = index[0];
	i = 0;
	if (all->len > 3)
	{
		while (all->a->index != 0)
			ra(all);
		pb(all);
		if (all->len == 5)
		{
			while (all->a->index != 1)
				ra(all);
			pb(all);
		}
	}
//	printf("aux\n");
//	print_stacks(all->aux);
//	printf("a\n");
//	print_stacks(all->a);
	*all->aux = *all->a;
//	printf("aux\n");
//	print_stacks(all->aux);
//	printf("a\n");
//	print_stacks(all->a);
	three_numbers(all);
//	printf("aux_after\n");
//	print_stacks(all->aux);
//	printf("a_after\n");
//	print_stacks(all->a);
	if (all->len == 4)
		pa(all);
	if (all->len == 5)
	{
		pa(all);
		pa(all);
	}
//	print_stacks(all->a);
//	print_stacks(all->b);
}

void	long_push_swap(t_all *all)
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


