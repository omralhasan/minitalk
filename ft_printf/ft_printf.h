/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 10:55:58 by oalhasan          #+#    #+#             */
/*   Updated: 2025/10/05 10:56:38 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_putunbr(unsigned int n);
int	ft_putnbr(int n);
int	ft_putstr(char *c);
int	ft_put_hex(unsigned long hex, char format);
int	ft_put_ptr(unsigned long n);
#endif