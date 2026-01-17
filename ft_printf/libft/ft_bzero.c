/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 18:19:51 by oalhasan          #+#    #+#             */
/*   Updated: 2025/08/18 16:18:20 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	if (n <= 0)
		return (0);
	while (n != 0)
	{
		*(unsigned char *)s = '\0';
		s++;
		n--;
	}
	return (s);
}

// int	main(void)
// {
// 	char	s[6] = "eeeee";

// 	ft_bzero(s, 4);
// 	printf("%s", s);
// }
