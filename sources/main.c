/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 19:07:27 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/22 00:27:50 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
}

static void	freeing(t_all *all, int *num, int *index)
{
	free(index);
	index = NULL;
	free(num);
	num = NULL;
	ps_lstclear(&all->a);
	ps_lstclear(&all->b);
}

int	main(int argc, char **argv)
{
	t_all	all;
	int		*num;
	int		*index;

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
	ft_itob(argc, index);
	init_struct(&all, num, argc);
	fill_stack_a(&all);
	tests(&all);
	freeing(&all, num, index);
	return (true);
}
