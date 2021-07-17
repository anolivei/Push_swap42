/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 20:08:36 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/17 02:41:32 by anolivei         ###   ########.fr       */
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
	int					content;
	struct s_stack		*previous;
	struct s_stack		*next;
}						t_stack;

typedef struct s_all
{
	t_stack	*a;
	t_stack	*b;

	int		*num;
	int		len;
}			t_all;

/*
** Functions
*/

int		validate_args(int argc, char **argv);
int		is_integer(char *argv);
bool	check_duplicates(int argc, int *num);
void	transform_args(int argc, char **argv, int *num);

void	init_struct(t_all *all, int *num, int argc);
void	fill_stack(t_all *all);

void	exit_error(void);

t_stack	*ps_lstnew(int content);
void	ps_lstadd_back(t_stack **lst, t_stack *next);
t_stack	*ps_lstlast(t_stack *lst);

#endif