/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstonesn <dstonesn@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 12:10:23 by dstonesn          #+#    #+#             */
/*   Updated: 2020/10/30 12:21:32 by dstonesn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int i = 0;
	while( i < n)
	{
		if(str1[i] != str2[i])
		{
			return(str1[i] - str2[i]);
		}
	i++;
	}
	return(0);
}