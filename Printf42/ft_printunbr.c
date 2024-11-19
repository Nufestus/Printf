/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:36:43 by aammisse          #+#    #+#             */
/*   Updated: 2024/11/19 16:24:22 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_printnbr_helper(unsigned int n, int *res)
{
	if (n >= 10)
	{
		ft_printnbr_helper(n / 10, res);
	}
	*res += ft_putchar((n % 10) + '0');
}

int	ft_printunbr(unsigned int n)
{
	int	res;

	res = 0;
	ft_printnbr_helper(n, &res);
	return (res);
}
