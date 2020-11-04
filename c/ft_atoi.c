/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstonesn <dstonesn@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 11:06:33 by dstonesn          #+#    #+#             */
/*   Updated: 2020/10/30 12:07:43 by dstonesn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int res;
    int gg;

    i = 0;
    sign = 1;
    res = 0;
    while(str[i] == ' '  || str[i] == '\t' || str[i] == '\n' || str[i] == '\r')
    {
        i++;
    }
    if(str[i] == '-' || str[i] == '+')
    {
            if(str[i] == '-')
            {
                    sign = -1;
            }
                  i++;
    }
    while(str[i] != '\0' )
    {
        gg = str[i] - '0';
        res = res*10 +gg ;
        i++;
    }
    res = res * sign;
    return(res);
}
