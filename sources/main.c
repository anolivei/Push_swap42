/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 19:07:27 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/17 00:34:17 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_all	*all;
	int		*num;

	argc--;
	argv++;
	num = malloc(sizeof(int) * argc);
	if (!num)
		return (false);
	validate_args(argc, argv);
	transform_args(argc, argv, num);
	check_duplicates(argc, num);
	all = NULL;
	all = init_struct(all, num);
	free(num);
	num = NULL;
	return (true);
}
