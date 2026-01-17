/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:07:08 by oalhasan          #+#    #+#             */
/*   Updated: 2025/08/18 16:19:36 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	d;

	d = ((unsigned char)c);
	src = ((unsigned char *)s);
	while (n != 0)
	{
		if (*src == d)
		{
			return ((void *)src);
		}
		n--;
		src++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	// char c[5] = "omar";
// 	// char x = ;

// 	printf("%s\n", (char *)ft_memchr("omar", 'o', -1));
//     printf("%s\n", (char *)memchr("omar", 'o', -1));
// }