/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 01:35:12 by oalhasan          #+#    #+#             */
/*   Updated: 2025/08/23 01:39:30 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*x;
	size_t	len;

	len = ft_strlen(s);
	x = (char *)malloc(len + 1);
	if (!x)
		return (NULL);
	ft_strlcpy(x, s, len + 1);
	return (x);
}
