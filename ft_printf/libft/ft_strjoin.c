/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 04:54:19 by oalhasan          #+#    #+#             */
/*   Updated: 2025/08/23 01:40:40 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lens1;
	int		lens2;
	int		len;
	char	*x;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	len = 0;
	x = (char *)malloc(lens1 + lens2 + 1);
	if (x == NULL)
		return (NULL);
	while (len < lens1 || len <= lens2)
	{
		if (len < lens1)
			x[len] = s1[len];
		if (len < lens2)
			x[len + lens1] = s2[len];
		len++;
	}
	x[lens1 + lens2] = '\0';
	return (x);
}
