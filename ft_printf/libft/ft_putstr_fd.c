/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 05:53:37 by oalhasan          #+#    #+#             */
/*   Updated: 2025/08/23 01:35:50 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	count;

	if (!s)
		return ;
	count = 0;
	while (s[count] != '\0')
	{
		write(fd, &s[count], 1);
		count++;
	}
}
