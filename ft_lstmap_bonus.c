/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesalman <mesalman@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 12:42:52 by mesalman          #+#    #+#             */
/*   Updated: 2025/07/04 14:00:22 by mesalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*newlst;
	void	*content;

	newlst = NULL;
	while (lst)
	{
		content = f (lst->content);
		new = ft_lstnew(content);
		if (!new)
		{
			del(content);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		else
			ft_lstadd_back(&newlst, new);
		lst = lst->next;
	}
	return (newlst);
}
