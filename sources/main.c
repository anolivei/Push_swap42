/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 19:07:27 by anolivei          #+#    #+#             */
/*   Updated: 2021/06/23 23:07:59 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	error(void)
{
	ft_putstr_fd("Error\n", 1);
	exit(1);
}

static int	validate_args(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if (is_integer(argv[i]) == 0)
		{
			error();
			return (false);
		}
		i++;
	}
	return (true);
}

static void	transform_args(int argc, char **argv, int *num)
{
	int i;

	i = 0;
	while (i < argc)
	{
		num[i] = ft_atoi(argv[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	*num;

	argc--;
	argv++;
	num = malloc(sizeof(int) * argc);
	if (!num)
		return(false);
	validate_args(argc, argv);
	transform_args(argc, argv, num);
	i = 0;
	while (i < argc)
	{
		printf("%i, ", num[i]);
		i++;
	}
	free(num);
	num = NULL;
	return (true);
}
