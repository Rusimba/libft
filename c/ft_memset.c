/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstonesn <dstonesn@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 18:07:40 by dstonesn          #+#    #+#             */
/*   Updated: 2020/10/30 18:35:31 by dstonesn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset (void *destination, int c, size_t n)
{
	int i;
	unsigned char *pchar;

	pchar = (unsigned char *)destination;
	i=0;
	while(i<n)
	{
		pchar[i] = (unsigned char)c ;
		i++;
	}
	return(destination);
}
