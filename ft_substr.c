/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstonesn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 10:41:35 by dstonesn          #+#    #+#             */
/*   Updated: 2020/09/22 17:59:43 by dstonesn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	size_t 			s1;
	size_t 			i;

	if (!s)
		return (NULL);
	p = (char*)malloc(sizeof(*s)*(len+1));
	if (!p)
		return (NULL);
	i = 0;
	s1 = 0;
	while (s[i] != '\0')
	{
		if ( i >= start && s1 < len)
		{
			p[s1] = s[i];
			s1++;
		}
		i++;
	}
	p[s1] = '\0';
	return (p);
}
