/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 18:40:30 by oalhasan          #+#    #+#             */
/*   Updated: 2025/10/06 07:50:01 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_type(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (c == 's')
	{
		count += ft_putstr(va_arg(args, char *));
	}
	else if (c == 'i' || c == 'd')
		count += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		count += ft_putunbr(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		count += ft_put_hex(va_arg(args, unsigned int), c);
	else if (c == 'p')
		count += ft_put_ptr(va_arg(args, long int));
	else if (c == '%')
		count += write(1, "%", 1);
	else
		ft_putchar(c);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	i = 0;
	count = 0;
	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);
		else if (format[i] == '%' && format[i + 1] != '\0')
		{
			count += ft_type((format[++i]), args);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
