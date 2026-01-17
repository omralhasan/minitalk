/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 01:10:13 by oalhasan          #+#    #+#             */
/*   Updated: 2025/08/23 01:26:46 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*s;

	if (nmemb == 0 || size == 0)
	{
		s = malloc(1);
		if (!s)
			return (NULL);
		return (s);
	}
	s = (char *)malloc(nmemb * size);
	if (!s)
		return (NULL);
	return (ft_memset(s, 0, nmemb * size));
}
