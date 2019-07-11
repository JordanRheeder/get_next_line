/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 00:34:14 by jrheeder          #+#    #+#             */
/*   Updated: 2019/06/10 15:37:48 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && (i < n))
		i++;
	if (((unsigned char)s1[i] - (unsigned char)s2[i]) < 0 && i < n)
		return (-1);
	else if (((unsigned char)s1[i] - (unsigned char)s2[i]) > 0 && i < n)
		return (1);
	else
		return (0);
}
