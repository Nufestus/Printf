/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 19:34:52 by aammisse          #+#    #+#             */
/*   Updated: 2024/11/19 16:06:44 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	convert_hex(unsigned int a)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	return (write(1, &hex[a], 1));
}

int	ft_printhexup(unsigned int a)
{
	long long int	b;
	int				res;

	b = a;
	res = 0;
	if (b >= 16)
		res += ft_printhexup(b / 16);
	res += convert_hex(b % 16);
	return (res);
}
