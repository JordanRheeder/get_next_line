/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 02:28:12 by jrheeder          #+#    #+#             */
/*   Updated: 2019/06/08 22:16:19 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*string;
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		string = ft_strnew(ft_strlen(s));
		if (string != '\0' && f != '\0')
		{
			while (s[i])
			{
				string[i] = (*f)(i, s[i]);
				i++;
			}
			return (string);
		}
	}
	return (NULL);
}
