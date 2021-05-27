/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 23:04:00 by anolivei          #+#    #+#             */
/*   Updated: 2020/02/01 22:29:56 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *map;

	if (lst == 0)
		return (NULL);
	else
	{
		if ((map = ft_lstnew(f(lst->content))) == NULL)
		{
			ft_lstclear(&map, del);
			return (NULL);
		}
		map->next = ft_lstmap(lst->next, f, del);
		return (map);
	}
}
