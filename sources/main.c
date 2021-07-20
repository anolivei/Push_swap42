/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 19:07:27 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/20 00:36:18 by anolivei         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	t_all	all;
	int		*num;

	argc--;
	argv++;
	num = malloc(sizeof(int) * argc);
	if (!num)
		return (false);
	validate_args(argc, argv);
	transform_args(argc, argv, num);
	check_duplicates(argc, num);
	init_struct(&all, num, argc);
	fill_stack_a(&all);
	tests(&all);
	free(num);
	num = NULL;
	ps_lstclear(&all.a);
	ps_lstclear(&all.b);
	return (true);
}
