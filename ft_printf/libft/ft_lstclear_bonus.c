/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:23:40 by oalhasan          #+#    #+#             */
/*   Updated: 2025/08/18 16:23:42 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*str;

	if (lst)
	{
		while (*lst)
		{
			str = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = str;
		}
	}
}
