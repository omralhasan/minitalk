/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 21:16:00 by oalhasan          #+#    #+#             */
/*   Updated: 2025/08/18 16:19:53 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	s = ((unsigned char *)src);
	d = ((unsigned char *)dest);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
// #include <string.h>

// int	main(void)
// {
// 	char	*s;
// 	char	*d;

// 	s = NULL; //"zyxwvutsrqponmlkjihgfedcba";
// 	d = NULL; //"jjjjjjjjjjjjjjjjjjjjjjjjjjjjjj";
// 	printf("%s\n", (char *)memcpy(s, d, 3));
// 	// write (1, d, 8);
// 	// ft_memcpy(d, s, 0);
// 	// printf("%s", d);
// }
