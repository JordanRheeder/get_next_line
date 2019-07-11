/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:30:45 by jrheeder          #+#    #+#             */
/*   Updated: 2019/06/10 19:12:23 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(const char *str, char c)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			count++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);
}

static int	ft_length(char const *str, char c)
{
	int i;
	int len;

	len = 0;
	i = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

char		**ft_strsplit(char const *str, char c)
{
	int		i;
	int		j;
	int		k;
	char	**new;

	i = 0;
	k = 0;
	if (!str || !c)
		return (0);
	new = (char **)malloc(sizeof(char *) * (ft_count(str, c) + 1));
	if (new == NULL)
		return (NULL);
	while (ft_count(str, c) > i)
	{
		while (str[k] == c && str[k])
			k++;
		new[i] = (char *)malloc(sizeof(char) * (ft_length(str, c) + 1));
		j = 0;
		while (str[k] != c && str[k])
			new[i][j++] = str[k++];
		new[i][j] = '\0';
		i++;
	}
	new[i] = 0;
	return (new);
}
