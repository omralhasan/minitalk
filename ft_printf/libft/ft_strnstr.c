/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 22:43:37 by oalhasan          #+#    #+#             */
/*   Updated: 2025/08/23 01:29:09 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	else if (len == 0)
		return (NULL);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && big[i + j] == little[j] && i + j < len)
		{
			if (!little[j + 1])
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// // #include <string.h>  // For comparison
// // Include your libft header
// //#include "libft.h"   // Make sure ft_strnstr is declared here

// int main(void)
// {
//    const char *haystack = "Hello world";
// const char *needle = "world";
// size_t len = 11;

//     // Using your ft_strnstr
//     char *result_ft = ft_strnstr(haystack, needle, len);
//     // Using the standard strnstr (if available)
//     // char *result_std = strnstr(haystack, needle, len);

//     printf("Searching for \"%s\" in \"%s\" (first %zu chars)\n", needle,
// haystack, len);
//     printf("ft_strnstr:  %s\n", result_ft ? result_ft : "NULL");
//     // printf("strnstr:     %s\n", result_std ? result_std : "NULL");

//     return (0);
// }
