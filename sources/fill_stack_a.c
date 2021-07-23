/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 01:34:53 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/22 00:44:30 by anolivei         ###   ########.fr       */
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

/*
** Functions using printf only to test while I am writing the code
*/

void	print_stacks(t_stack *stack)
{
	t_stack	*tmp;

	printf("PRINT STACK\n");
	tmp = stack;
	while (tmp)
	{
		printf("%d ", tmp->content);
		tmp = tmp->next;
	}
	printf("\n");
	printf("FIM\n");
}

void	print_vectors(int len, int *num)
{
	int	i;

	i = 0;
	printf("PRINT VECTOR\n");
	while (i < len)
	{
		printf("%d ", num[i]);
		i++;
	}
	printf("\n");
	printf("FIM\n");
}

void	print_char_vectors(int len, char **str)
{
	int	i;

	i = 0;
	printf("PRINT CHAR VECTOR\n");
	while (i < len)
	{
		printf("%s ", str[i]);
		i++;
	}
	printf("\n");
	printf("FIM\n");
}
