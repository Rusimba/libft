/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstonesn <dstonesn@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 19:20:54 by dstonesn           #+#    #+#             */
/*   Updated: 2020/10/30 13:34:45 by dstonesn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "ft_memset.c"

#include "libft.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char src[100] = "hello world";
	char dest[100] = "hello world";
	char src1[100] = "123456789";
	char dest1[100] = "123456789";

	char *sym;
	char *sym1;

	int a = 555;

//	ft_strcpy(dest, src);
//	printf("%s\n", dest);

//	strcpy(dest1, src1);
//	printf("%s\n", dest1);

//	ft_putnbr_fd(555, 3);

	memset(src, '8', 7);
	printf("%s\n", src);

	ft_memset(dest, '8', 7);
	printf("%s\n", dest);

	/*bzero(src, 2);
	for (int i = 0; i <= 10; i++)
		ft_putchar(src[i]);

	ft_putchar('\n');

	ft_bzero(dest, 2);
	for (int b = 0; b <= 10; b++)
		ft_putchar(dest[b]);
/*
/*	memcpy(src1, src, 25);
	printf("%s\n", src1);

	ft_memcpy(dest1, dest, 25);
	printf("%s\n", dest1);*/
/*
	memccpy(src1, src, 'r', 10);
	printf("%s\n", src1);

	ft_memccpy(dest1, dest, 'r', 10);
	printf("%s\n", dest1);*/
/*
	memmove(src1, src, 25);
	for (int i = 0; i <= 25; i++)
		ft_putchar(src[i]);

	ft_putchar('\n');

	ft_memmove(dest1, dest, 25);
	for (int i = 0; i <= 25; i++)
		ft_putchar(src[i]);*/

//	sym = memchr(src1, '4', 4);

//	if (sym != NULL)
//      sym[0]='!';

//	printf("%s\n", src1);

//	sym = memchr(dest1, '4', 4);

//	if (sym != NULL)
 //     sym[0]='!';

	//printf("%s\n", dest1);
//const char *largestring = "Foo Bar Bazerrr";
//const char *smallstring = "22";
//char *ptr;
//ptr = strnstr(largestring, smallstring, 15);
//printf("%s",ptr);
}
