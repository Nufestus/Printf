/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 19:38:41 by aammisse          #+#    #+#             */
/*   Updated: 2024/11/19 16:06:50 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	convert_hex(size_t a)
{
	char	*hex;

	hex = "0123456789abcdef";
	return (write(1, &hex[a], 1));
}

static int	printhex(size_t a)
{
	int				res;

	res = 0;
	if (a >= 16)
		res += printhex(a / 16);
	res += convert_hex(a % 16);
	return (res);
}

int	ft_printptr(void *ptr)
{
	int	res;

	res = 0;
	res += write(1, "0x", 2);
	res += printhex((size_t)ptr);
	return (res);
}
