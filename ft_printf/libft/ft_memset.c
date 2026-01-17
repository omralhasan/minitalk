/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 21:48:30 by oalhasan          #+#    #+#             */
/*   Updated: 2025/08/18 16:20:13 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*x;
	unsigned char	y;

	y = ((unsigned char)c);
	x = ((unsigned char *)s);
	if (n == 0)
		return (s);
	while (n != 0)
	{
		*x = y;
		x++;
		n--;
	}
	return (s);
}

// int	main(void)
// {
// 	// char	*s = malloc(14);

// 	// memset(s, 'c', 15);
// 	// ft_memset(s, '\0', 1);
// 	// printf("%s", s);
// 	// const int size = 18;
//  	// char b1[0xF00];

// }
