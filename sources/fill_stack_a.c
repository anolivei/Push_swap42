/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 01:34:53 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/24 17:29:20 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack_a(t_all *all, char **bin, int *index)
{
	int	i;

	if (all->len)
	{
		i = 0;
		all->a = ps_lstnew(bin[i], index[i]);
		while (i < all->len - 1)
		{
			i++;
			ps_lstadd_back(&all->a, ps_lstnew(bin[i], index[i]));
		}
		print_stacks(all->a);
	}
}

void	fill_stack_aux(t_all *all, char **bin, int *index)
{
	int	i;

	if (all->len)
	{
		i = 0;
		all->aux = ps_lstnew(bin[i], index[i]);
		while (i < all->len - 1)
		{
			i++;
			ps_lstadd_back(&all->aux, ps_lstnew(bin[i], index[i]));
		}
		print_stacks(all->aux);
	}
}

/*
** Functions using printf only to test while I am writing the code
*/

void	print_stacks(t_stack *stack)
{
	t_stack	*tmp;

//	printf("PRINT STACK\n");
	tmp = stack;
	while (tmp)
	{
//		printf("%d ", tmp->index);
		tmp = tmp->next;
	}
//	printf("\n");
//	printf("FIM\n");
}

void	print_vectors(int len, int *num)
{
	int	i;
	int *n;

	n = num;
	i = 0;
//	printf("PRINT VECTOR\n");
	while (i < len)
	{
//		printf("%d ", num[i]);
		i++;
	}
//	printf("\n");
//	printf("FIM\n");
}

void	print_char_vectors(int len, char **str)
{
	int	i;
	char **v;

	i = 0;
	i = len;
	v = str;
	
//	printf("PRINT CHAR VECTOR\n");
	while (i < len)
	{
//		printf("%s ", str[i]);
		i++;
	}
//	printf("\n");
//	printf("FIM\n");
}
