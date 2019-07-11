/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:51:08 by jrheeder          #+#    #+#             */
/*   Updated: 2019/06/10 23:41:05 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*fresh;

	if (lst && f)
	{
		ret = f(lst);
		fresh = ret;
		while (lst->next)
		{
			lst = lst->next;
			if (!(ret->next = f(lst)))
			{
				free(ret->next);
				return (NULL);
			}
			ret = ret->next;
		}
		return (fresh);
	}
	return (NULL);
}
