/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 20:08:36 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/24 16:52:37 by anolivei         ###   ########.fr       */
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
	char				*content;
	int					index;
	struct s_stack		*next;
}						t_stack;

typedef struct s_all
{
	t_stack	*a;
	t_stack	*b;
	t_stack *aux;
	t_stack *aux_b;
	int		limit;
	char	**bin;
	int		*num;
	int		len;
}			t_all;

/*
** Functions
*/

int		validate_args(int argc, char **argv);
int		is_integer(char *argv);
bool	check_duplicates(int argc, int *num);
bool	array_is_sorted(int argc, int *num);
void	transform_args(int argc, char **argv, int *num);

void	init_struct(t_all *all, int *num, int argc);
void	fill_stack_a(t_all *all, char **bin, int *index);
void	fill_stack_aux(t_all *all, char **bin, int *index);

void	exit_error(void);

t_stack	*ps_lstnew(char *bin, int index);
void	ps_lstadd_back(t_stack **lst, t_stack *next);
t_stack	*ps_lstlast(t_stack *lst);
void	ps_lstdelone(t_stack *lst, void (*del)(void *));
t_stack	*ps_lstprevlast(t_stack *lst);
void	ps_lstadd_front(t_stack **lst, t_stack *new);
void	ps_lstclear(t_stack **lst);

void	print_stacks(t_stack *stack);
void	print_vectors(int len, int *num);
void	print_char_vectors(int len, char **str);

void	ft_del(int *content);

char	*ft_itob(int len, int num);
char	**string_bin(int len, int *num);
int		find_limit(int len);

void	pa(t_all *all);
void	pb(t_all *all);
void	sa(t_all *all);
void	sb(t_all *all);
void	ss(t_all *all);
void	ra(t_all *all);
void	rb(t_all *all);
void	rr(t_all *all);
void	rra(t_all *all);
void	rrb(t_all *all);
void	rrr(t_all *all);

int		*quick_sort(int len, int *num);
int		*get_index(int len, int *num, int *cpy);
int		*link_index(int len, int *num);

void	push_swap(t_all *all, int *index);
void	short_push_swap(t_all *all, int *index);
void	long_push_swap(t_all *all);

#endif