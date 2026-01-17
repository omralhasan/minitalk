/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 19:22:19 by oalhasan          #+#    #+#             */
/*   Updated: 2025/08/18 16:21:49 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*st;
	char	*str;

	st = NULL;
	str = (char *)s;
	while (*str != '\0')
	{
		if (*str == ((char)c))
			st = str;
		str++;
	}
	if (*str == ((char)c))
		st = str;
	return (st);
}

// int	main(void)
// {
// 	char c[5] = "omamr";

// 	printf("%s", ft_strrchr(c, 'm'));
// }