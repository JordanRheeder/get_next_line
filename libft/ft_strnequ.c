/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 03:28:19 by jrheeder          #+#    #+#             */
/*   Updated: 2019/06/08 22:18:22 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int	i;
	unsigned int	s1len;
	unsigned int	s2len;

	if (s1 && s2 && n)
	{
		s1len = ft_strlen(s1);
		s2len = ft_strlen(s2);
		i = 0;
		if (s1len != s2len)
			return (0);
		while (s1[i] && s2[i] && i < n)
		{
			if (s1[i] != s2[i])
				return (0);
			i++;
		}
	}
	return (1);
}
