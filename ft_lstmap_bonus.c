/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-badd <mel-badd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:04:47 by mel-badd          #+#    #+#             */
/*   Updated: 2024/11/16 21:57:33 by mel-badd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*nobj;
	void	*new;

	nlst = NULL;
	if (!f || !del)
		return (NULL);
	while (lst)
	{
		new = f(lst->content);
		nobj = ft_lstnew(new);
		if (!nobj)
		{
			ft_lstclear(&nlst, del);
			free(new);
			return (NULL);
		}
		ft_lstadd_back(&nlst, nobj);
		lst = lst->next;
	}
	return (nlst);
}
