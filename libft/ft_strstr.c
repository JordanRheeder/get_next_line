/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 00:34:43 by jrheeder          #+#    #+#             */
/*   Updated: 2019/06/05 16:02:48 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*hay;

	i = 0;
	hay = (char *)haystack;
	if (ft_strlen(needle) == '\0')
		return (hay);
	while (hay[i] != '\0')
	{
		j = 0;
		while (needle[j] == hay[j + i])
		{
			if (needle[j + 1] == '\0')
			{
				return (&hay[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
