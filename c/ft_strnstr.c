/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstonesn <dstonesn@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:13:12 by dstonesn          #+#    #+#             */
/*   Updated: 2020/10/30 18:00:36 by dstonesn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

  char* ft_strnstr(const char	*big, const char *little, size_t len)
  {
    int i;
    int j;

    i = 0;
    if(little[i] == '\0')
      return(char *)big;
    while((i < len) && (big[i] != '\0'))
    {
      j = 0;
      while(i < len && little[j] && big[i] && little[j] == little[i] )
      {
        i++;
        j++;
      }
      if(little[i] == '\0')
      {
        return(char *)&big[i-j];
      }
        i = i-j-1;
    }
    return(NULL);
  }

