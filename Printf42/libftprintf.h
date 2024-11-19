/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammisse <aammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 20:24:18 by aammisse          #+#    #+#             */
/*   Updated: 2024/11/19 16:20:47 by aammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *buffer, ...);
int	ft_printnbr(int n);
int	ft_printstr(char *str);
int	ft_putchar(int c);
int	ft_printunbr(unsigned int n);
int	ft_printhexlow(unsigned int a);
int	ft_printhexup(unsigned int a);
int	ft_printptr(void *ptr);

#endif