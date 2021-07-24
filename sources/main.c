/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 19:07:27 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/24 00:30:26 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
static void	tests(t_all *all)
{
	sa(all);
	ss(all);
	sb(all);
	ra(all);
	rr(all);
	rra(all);
	rrb(all);
	rb(all);
	rrr(all);
	pa(all);
	pa(all);
	pb(all);
}*/

static void	freeing(t_all *all, int *num, int *index, char **bin)
{
	int	i;

	free(index);
	index = NULL;
	free(num);
	num = NULL;
	ps_lstclear(&all->a);
	ps_lstclear(&all->b);
	i = 0;
	while (i < all->len)
	{
		free(bin[i]);
		i++;
	}
	free(bin);
}

int	main(int argc, char **argv)
{
	t_all	all;
	int		*num;
	int		*index;
	char	**bin;

	if (argc == 1)
		exit(true);
	argc--;
	argv++;
	num = malloc(sizeof(int) * argc);
	if (!num)
		return (false);
	validate_args(argc, argv);
	transform_args(argc, argv, num);
	check_duplicates(argc, num);
	if (array_is_sorted(argc, num))
		exit(true);
	index = link_index(argc, num);
	bin = string_bin(argc, index);
	init_struct(&all, num, argc);
	fill_stack_a(&all, bin, index);
//	tests(&all);
	push_swap(&all);
	freeing(&all, num, index, bin);
	return (true);
}
