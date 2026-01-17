/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:18:40 by oalhasan          #+#    #+#             */
/*   Updated: 2025/08/18 16:21:03 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;
	size_t	j;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (size <= dstlen)
		return (srclen + size);
	i = dstlen;
	j = 0;
	while (src[j] && i + 1 < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dstlen + srclen);
}
// int	main(void)
// {
// 	char d[] = "omarabudiak";
// 	char c[] = "alhassan";
// 	printf("%zu", ft_strlcat(d, c, 7));
// 	// printf("%s", d);
// }