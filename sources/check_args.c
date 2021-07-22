/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 00:27:09 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/21 23:23:30 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	validate_args(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if (is_integer(argv[i]) == 0)
		{
			exit_error();
			return (false);
		}
		i++;
	}
	return (true);
}

bool	check_duplicates(int argc, int *num)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (num[i] == num[j])
			{
				exit_error();
				return (true);
			}
			j++;
		}
		i++;
	}
	return (false);
}

void	transform_args(int argc, char **argv, int *num)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		num[i] = ft_atoi(argv[i]);
		i++;
	}
}

bool	array_is_sorted(int len, int *num)
{
	int	i;

	i = 0;
	while (i < len - 1 && num[i] < num[i + 1])
		i++;
	if (i == len - 1)
		return (true);
	else
		return (false);
}
