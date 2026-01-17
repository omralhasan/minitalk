/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 18:54:25 by oalhasan          #+#    #+#             */
/*   Updated: 2025/10/04 21:49:58 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"

int	ft_putstr(char *c)
{
	int	len;
	int	count;

	count = 0;
	if (!c)
	{
		count += write(1, "(null)", 6);
		return (count);
	}
	len = ft_strlen(c);
	count += write(1, c, len);
	return (count);
}
