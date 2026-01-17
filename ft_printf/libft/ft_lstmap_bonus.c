/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:24:13 by oalhasan          #+#    #+#             */
/*   Updated: 2025/08/18 16:24:16 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		if (!new_content)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
// void ft_delete_content(void *lst)
// {
// 		free(lst);
// }
// void	*ft_content(void *lst)
// {
// 	char  *x;
// 	int		i = 0;

// 	x = (char *)lst;
// 	while (x[i])
// 	{
// 		x[i] = ft_toupper(x[i]);
// 		i++;
// 	}
// 	printf("%c\n", (*x));
// 	return (x);
// }
// int main()
// {
// 	t_list *temp;

// 	temp = ft_lstnew(ft_strdup("omar"));
// 		ft_lstmap(temp , ft_content, ft_delete_content );

// 		while(temp != 0)
// 		{
// 		printf("%s" , (char *)temp->content);
// 		temp = temp->next;
// 		}
// }
