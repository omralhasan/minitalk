/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 22:01:03 by oalhasan          #+#    #+#             */
/*   Updated: 2025/08/18 16:21:10 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	i;

	srclen = 0;
	i = 0;
	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	while (i < size - 1 && src[i] != '\0')
	{
		*(dst + i) = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}
// int main()
// {
//     char  d[100] = "";
//     char  s[] = "lorem ipsum";
//     char x = ft_strlcpy(d,s,3);
//     printf("%d" ,x);

// }
