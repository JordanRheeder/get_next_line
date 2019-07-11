/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 00:32:49 by jrheeder          #+#    #+#             */
/*   Updated: 2019/06/05 17:13:43 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*temp_b;
	size_t				index;

	temp_b = (unsigned char *)b;
	index = 0;
	if (len == 0)
	{
		return (b);
	}
	while (index < len)
	{
		temp_b[index] = c;
		index++;
	}
	return (b);
}
