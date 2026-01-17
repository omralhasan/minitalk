/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalshbou <oalshbou@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:13:49 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/17 18:32:25 by oalshbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"

static int	put_hex_up(unsigned int hex)
{
	int		count;
	char	*hex_array;

	count = 0;
	hex_array = "0123456789abcdef";
	if (hex > 0 && hex <= 15)
	{
		if (hex >= 10 && hex <= 16)
		{
			count += ft_toupper(hex_array[hex]);
			return (count);
		}
		else
			count += write(1, &hex_array[hex], 1);
	}
	else if (hex >= 16)
	{
		count += put_hex_up(hex / 16);
		count += ft_toupper(hex_array[hex % 16]);
	}
	return (count);
}

int	ft_put_hex(unsigned long hex, char format)
{
	char	*hex_array;
	int		count;

	hex_array = "0123456789abcdef";
	count = 0;
	if (format == 'X')
	{
		count += put_hex_up(hex);
		return (count);
	}
	else if (hex <= 15)
	{
		count += write(1, &hex_array[hex], 1);
		return (count);
	}
	else if (hex >= 16)
	{
		count += ft_put_hex(hex / 16, format);
		count += ft_putchar(hex_array[hex % 16]);
	}
	return (count);
}
