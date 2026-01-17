/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:23:32 by oalhasan          #+#    #+#             */
/*   Updated: 2025/08/23 01:33:40 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	if (!new || !lst)
	{
		return ;
	}
	if (!*lst)
	{
		*lst = new;
	}
	else
	{
		head = *lst;
		while (head->next != NULL)
		{
			head = head->next;
		}
		head->next = new;
	}
}
