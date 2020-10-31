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

#include <stdio.h>
//#include <unistd.h>
//#include <stdlib.h>

int atoi(const char *str)
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
     printf(" result true = %i",res);
    return(res);
}

int main (void)
{
    char *Str = "   -123";
    int  Num=0;
    Num = atoi(Str);
    //printf ("%d\n",Num);
    return 0;
}
