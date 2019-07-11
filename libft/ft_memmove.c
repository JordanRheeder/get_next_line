/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 00:32:44 by jrheeder          #+#    #+#             */
/*   Updated: 2019/06/05 17:09:47 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_src;
	unsigned char	*tmp_dest;
	size_t			index;

	tmp_src = (unsigned char *)src;
	tmp_dest = (unsigned char *)dest;
	index = -1;
	if (dest == NULL && src == NULL)
		return (0);
	else if (tmp_src < tmp_dest)
	{
		while ((int)(--n) >= 0)
			*(tmp_dest + n) = *(tmp_src + n);
	}
	else
	{
		while (++index < n)
			*(tmp_dest + index) = *(tmp_src + index);
	}
	return (dest);
}
