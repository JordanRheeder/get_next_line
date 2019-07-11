/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printrev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <jrheeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 13:59:36 by jrheeder          #+#    #+#             */
/*   Updated: 2019/06/18 14:02:57 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printrev(const char *s)
{
	const char *end;

	end = s + ft_strlen(s);
	while (end > s)
		ft_putchar(*--end);
}
