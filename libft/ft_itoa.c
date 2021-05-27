/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 19:24:29 by anolivei          #+#    #+#             */
/*   Updated: 2020/01/29 01:07:43 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int n_digits;

	n_digits = 0;
	if (n < 0)
		n = n * -1;
	while (n > 0)
	{
		n = n / 10;
		n_digits++;
	}
	return (n_digits);
}

static int	power(int n_digits)
{
	int p10;

	p10 = 1;
	while (n_digits > 0)
	{
		p10 = p10 * 10;
		n_digits--;
	}
	return (p10);
}

char		*ft_itoa(int n)
{
	char	*itoa;
	int		p10;
	int		i;

	if (!(itoa = (char *)malloc((count_digits(n) + 2) * sizeof(char))))
		return (NULL);
	if (n == -2147483648)
		return (ft_substr("-2147483648", 0, 11));
	i = 0;
	if (n < 0)
	{
		itoa[i++] = '-';
		n = n * (-1);
	}
	p10 = power(count_digits(n) - 1);
	while (p10 > 0)
	{
		itoa[i++] = (n / p10 % 10 + 48);
		p10 = p10 / 10;
	}
	itoa[i] = '\0';
	return (itoa);
}
