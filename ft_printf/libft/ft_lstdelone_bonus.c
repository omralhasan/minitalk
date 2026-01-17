/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:23:53 by oalhasan          #+#    #+#             */
/*   Updated: 2025/08/18 16:23:55 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// int	main(void)
// {
// 	t_list	*node;

//     node = ft_lstnew(strdup("Test Content"));

//     printf("Before deletion:\n");
//     print_list(node);
//     ft_lstdelone(node, delete_content);
//     printf("After deletion:\n");
//     return (0);
// }