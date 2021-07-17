/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 23:44:44 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/16 23:46:32 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_all	*init_struct(t_all *all, int *num)
{
	all = (t_all *)malloc(sizeof(t_all));
	if (!all)
		exit(1);
	all->a = NULL;
	all->b = NULL;
	all->num = num;
	return (all);
}
