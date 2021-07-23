/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itob.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 23:42:35 by anolivei          #+#    #+#             */
/*   Updated: 2021/07/22 21:27:49 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_itob(int len, int *num)
{ 
	int		c;
	int		d;
	int		t;
	char	*p;

	t = len;
	t = 0;
	p = (char *)malloc(32 + 1);
	if (p == NULL)
		exit(EXIT_FAILURE);
	c = 31;
	while (c >= 0)
	{
		d = num[1] >> c;
		if (d & 1)
			*(p + t) = 1 + '0';
		else
			*(p + t) = 0 + '0';
		t++;
		c--;
	}
	*(p + t) = '\0';
	printf("BIN %s\n", p);
	return (p);
}