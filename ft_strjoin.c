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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	str = (char*)malloc(sizeof(*s1)+sizeof(*s2));
	if (!str)
		return (NULL);
	 while (s1[i] != '\0')
	 {
	 	str[j] = s1[i];
	 	i++;
	 	j++;
	 }
	 i = 0;
	 while (s2[i] != '\0')
	 {
	 	str[j] = s2[i];
	 	j++;
	 	i++;
	 }
	 str[j] = '\0';
	return (str);
}
