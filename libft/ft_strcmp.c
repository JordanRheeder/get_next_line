/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 23:52:11 by jrheeder          #+#    #+#             */
/*   Updated: 2019/06/10 15:38:41 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]))
		i++;
	if (((unsigned char)s1[i] - (unsigned char)s2[i]) < 0)
		return (-1);
	else if (((unsigned char)s1[i] - (unsigned char)s2[i]) > 0)
		return (1);
	return (0);
}
