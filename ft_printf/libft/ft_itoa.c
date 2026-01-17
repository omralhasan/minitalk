/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 04:07:42 by oalhasan          #+#    #+#             */
/*   Updated: 2025/08/23 01:27:44 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	numlen(long n)
{
	size_t	len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	else if (n == 0)
	{
		return (1);
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	size_t	len;
	char	*str;

	num = n;
	len = numlen(num);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	str[len--] = '\0';
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		str[len--] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
