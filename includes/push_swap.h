/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 20:08:36 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/17 00:34:02 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdio.h>
# include <stdbool.h>
# include <limits.h>

/*
** Structures
*/

typedef struct s_stack
{
	int					num;
	struct s_stack		*previous;
	struct s_stack		*next;
}						t_stack;

typedef struct s_all
{
	struct t_stack	*a;
	struct t_stack	*b;

	int				*num;
}			t_all;

/*
** Functions
*/

int		validate_args(int argc, char **argv);
int		is_integer(char *argv);
bool	check_duplicates(int argc, int *num);
void	transform_args(int argc, char **argv, int *num);


t_all	*init_struct(t_all *all, int *num);

void	exit_error(void);

#endif