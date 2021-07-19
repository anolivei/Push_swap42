/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 19:07:27 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/18 23:00:31 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	sa(&all);
	ss(&all);
	sb(&all);
	ra(&all);
	rr(&all);
	rra(&all);
	rrb(&all);
	rb(&all);
	rrr(&all);
	free(num);
	num = NULL;
	return (true);
}
