/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 20:08:36 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/15 23:36:25 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdio.h>
# include <stdbool.h>
# include <limits.h>

/*
** Functions
*/
int		is_integer(char *argv);

typedef struct s_pslist
{
	int					num;
	int					index;
	struct s_stack		*previous;
	struct s_stack		*next;
}						t_pslist;

#endif