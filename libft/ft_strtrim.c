/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:32:59 by jrheeder          #+#    #+#             */
/*   Updated: 2019/06/10 17:00:59 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		sln;
	int		bgn;
	char	*str;

	if (!s)
		return (0);
	bgn = 0;
	sln = (ft_strlen(s) - 1);
	while ((s[bgn] == ' ') || (s[bgn] == '\n') ||
	(s[bgn] == '\t'))
	{
		bgn++;
		if (s[bgn] == '\0')
			return (ft_strdup(""));
	}
	while ((s[sln] == ' ') || (s[sln] == '\n') ||
		(s[sln] == '\t'))
		sln--;
	str = ft_strsub(s, bgn, (sln - bgn + 1));
	if (str)
	{
		return (str);
	}
	return (0);
}
