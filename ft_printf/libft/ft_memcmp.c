/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 22:35:05 by oalhasan          #+#    #+#             */
/*   Updated: 2025/08/18 16:19:44 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;
	size_t			i;

	i = 0;
	st1 = ((unsigned char *)s1);
	st2 = ((unsigned char *)s2);
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (st1[i] != st2[i])
			return (st1[i] - st2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// // #include <string.h>

// int main() {
//     char buffer1[] = "Hello, world!";
//     char buffer2[] = "Hello, world!";
//     char buffer3[] = "Hello, World!";  // Note the capital "W"

//     int result1 = ft_memcmp(buffer1, buffer2, sizeof(buffer1));
//     int result2 = ft_memcmp(buffer1, buffer3, sizeof(buffer1));

//     if (result1 == 0) {
//         printf("buffer1 and buffer2 are equal.\n");
//     } else {
//         printf("buffer1 and buffer2 are different.\n");
//     }

//     if (result2 == 0) {
//         printf("buffer1 and buffer3 are equal.\n");
//     } else {
//         printf("buffer1 and buffer3 are different.\n");
//     }

//     return (0);
// }
