/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:26:08 by mnachit           #+#    #+#             */
/*   Updated: 2023/11/17 08:40:00 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst != NULL && del != NULL)
	{
		tmp = *lst;
		while (*lst != NULL)
		{
			*lst = (*lst)->next;
			ft_lstdelone(tmp, del);
			tmp = *lst;
		}
		lst = NULL;
	}
}
