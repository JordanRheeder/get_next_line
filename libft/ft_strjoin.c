/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 20:38:48 by jrheeder          #+#    #+#             */
/*   Updated: 2019/07/01 14:29:02 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*pdest;
	int		len;

	if (!(s1 && s2))
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(pdest = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	if (s1 == NULL)
		return (NULL);
	ft_strcpy(pdest, s1);
	ft_strcat(pdest, s2);
	return (pdest);
}
