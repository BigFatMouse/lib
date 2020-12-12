/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhogg <mhogg@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 19:16:28 by mhogg             #+#    #+#             */
/*   Updated: 2020/12/12 02:14:59 by mhogg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*nextelem;

	if (lst && del)
	{
		tmp = *lst;
		while (tmp)
		{
			nextelem = tmp->next;
			ft_lstdelone(tmp, del);
			tmp = nextelem;
		}
		*lst = NULL;
	}
}
