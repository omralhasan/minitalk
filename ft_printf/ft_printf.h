/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalshbou <oalshbou@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 10:55:58 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/17 22:28:03 by oalshbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "./libft/libft.h"

int ft_printf(const char *format, ...);
int ft_putchar(int c);
int ft_putunbr(unsigned int n);
int ft_putnbr(int n);
int ft_putstr(char *c);
int ft_put_hex(unsigned long hex, char format);
int ft_put_ptr(unsigned long n);
#endif