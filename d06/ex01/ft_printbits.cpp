/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbits.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 21:31:44 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/12 17:41:43 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	count_binary_digits(int n)
{
	int		i;

	i = 0;
	while (n)
	{
		n /= 2;
		i++;
	}
	return (i);
}

static char	*pop_res(char *res, int n)
{
	int		i;

	i = 0;
	while (n)
	{
		res[i] = n % 2 + '0';
		n /= 2;
		i++;
	}
	if (i % 8 != 0)
		while (i % 8 != 0)
		{
			res[i] = '0';
			i++;
		}
	res[i] = 0;
	return (res);
}

void		ft_printbits(int n)
{
	char	*res;
	int		i;

	i = 0;
	if (n == 0)
		putchar('0');
	res = (char *)malloc(sizeof(char) * (count_binary_digits(n) + 1));
	i = 1;
	res = pop_res(res, n);
	while (res[i - 1])
	{
		putchar(res[i - 1]);
		if (i % 8 == 0)
			putchar('\n');
		i++;
	}
}
