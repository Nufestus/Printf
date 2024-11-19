/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:46:48 by aammisse          #+#    #+#             */
/*   Updated: 2024/11/19 16:06:53 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printstr(char *str)
{
	int	res;

	res = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (*str != '\0')
	{
		write(1, str, 1);
		res++;
		str++;
	}
	return (res);
}
