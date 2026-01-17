/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 05:22:17 by oalhasan          #+#    #+#             */
/*   Updated: 2025/08/13 03:33:27 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find(char a, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (a == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && find(s1[start], set))
		start++;
	while (end > start && find(s1[end - 1], set))
		end--;
	return (ft_substr(s1, start, end - start));
}

// int main()
// {
//     ft_
// }
