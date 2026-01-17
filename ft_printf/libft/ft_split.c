/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 19:40:50 by oalhasan          #+#    #+#             */
/*   Updated: 2025/08/23 01:38:47 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static int	ft_word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	**ft_free_all(char **str, int i)
{
	while (--i >= 0)
		free(str[i]);
	free(str);
	return (NULL);
}

static char	**fill_words(char **result, const char *s, char c)
{
	int	i;
	int	start;
	int	word_len;

	i = 0;
	start = 0;
	while (s[start])
	{
		while (s[start] && s[start] == c)
			start++;
		if (s[start])
		{
			word_len = ft_word_len(&s[start], c);
			result[i] = ft_substr(s, start, word_len);
			if (!result[i])
				return (ft_free_all(result, i));
			i++;
			start += word_len;
		}
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	return (fill_words(result, s, c));
}

// int	main(void)
// {
// 	char	**str;
// 	int		i;

// 	str = ft_split("",' ');
// 	printf("--%s\n",str[0]);
// 	printf("--%s\n",str[1]);
// 	free(str);
// }
