/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 23:44:44 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/17 02:26:27 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_struct(t_all *all, int *num, int argc)
{
	all->a = NULL;
	all->b = NULL;
	all->num = num;
	all->len = argc;
}
