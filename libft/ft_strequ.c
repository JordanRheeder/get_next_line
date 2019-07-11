/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 02:44:18 by jrheeder          #+#    #+#             */
/*   Updated: 2019/06/10 13:53:12 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	s1len;
	unsigned int	s2len;

	if (s1 && s2)
	{
		i = 0;
		s1len = ft_strlen(s1);
		s2len = ft_strlen(s2);
		if (s1len != s2len)
			return (0);
		while (s1[i] && s2[i])
		{
			if (s1[i] != s2[i])
				return (0);
			i++;
		}
	}
	return (1);
}
