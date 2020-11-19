/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstonesn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 10:06:23 by dstonesn          #+#    #+#             */
/*   Updated: 2020/09/30 19:39:52 by dstonesn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lensize(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	size_t	len;
	long	tmp;
	char	*s;

	tmp = n;
	len = lensize(tmp);
	s = (char*)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (tmp == 0)
		s[0] = '0';
	len--;
	if (tmp < 0)
	{
		s[0] = '-';
		tmp = tmp * -1;
	}
	while (tmp)
	{
		s[len] = tmp % 10 + '0';
		tmp = tmp / 10;
		len--;
	}
	return (s);
}
