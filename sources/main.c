/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 19:07:27 by anolivei          #+#    #+#             */
/*   Updated: 2021/06/13 16:24:38 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	error(void)
{
	ft_putstr_fd("Error\n", 1);
}

static void	validate_args(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if (is_integer(argv[i]) == 0)
			error();
		i++;
	}
}

int	main(int argc, char **argv)
{
	argc--;
	argv++;
	validate_args(argc, argv);
	return (0);
}
