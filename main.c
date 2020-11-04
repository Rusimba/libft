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
//#include <unistd.h>
#include <string.h>
#include <stdio.h>
//#include <stdlib.h>
#include "ft_memcmp.c"
#include "libft.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	const char src[100] = "hello world";
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

	/*memset(src, '8', 7);
	printf("%s\n", src);

	ft_memset(dest, '8', 7);
	printf("%s\n", dest);
*/
/*	bzero(src, 2);
	for (int i = 0; i <= 10; i++)
		ft_putchar(src[i]);

	ft_putchar('\n');

	ft_bzero(dest, 2);
	for (int b = 0; b <= 10; b++)
		ft_putchar(dest[b]);
*/
/*	memcpy(src, src1, 3);
	printf("%s\n", src);

	ft_memcpy(dest, dest1, 3);
	printf("%s\n", dest);
*/
/*	memccpy(src1, src, 'r', 10);
	printf("%s\n", src1);

	ft_memccpy(dest1, dest, 'r', 10);
	printf("%s\n", dest1);
*/

/*	memmove(src1, src, 4);
	for (int i = 0; i <= 25; i++)
		ft_putchar(src1[i]);

	ft_putchar('\n');

	ft_memmove(dest1, dest, 4);
	for (int i = 0; i <= 25; i++)
		ft_putchar(dest1[i]);
*/
/*	sym = memchr(src1, '4', 4);

	if (sym != NULL)
      sym[0]='!';

	printf("%s\n", src1);

	sym = ft_memchr(dest1, '4', 4);

	if (sym != NULL)
     sym[0]='!';
	printf("%s\n", dest1);
*/
/*	if (memcmp (src, dest, 15) == 0)
		puts (" original Области памяти идентичные.");
	else
	puts (" original Области памяти отличаются.");
	if (ft_memcmp (src, dest, 15) == 0)
		puts (" my Области памяти идентичные.");
	else
	puts ("my Области памяти отличаются.");
*/
/*	a = ft_strlcpy(dest,dest1,10);
	printf("%s \n",dest);
	printf("%i",a);
*/
/*	sym = ft_strchr(src1,'h');
	if (sym==NULL)
		printf ("Символ в строке не найден\n");
	else
	printf ("Искомый символ в строке на позиции # \n");
*/
/*	sym = strdup (src1);
	printf ("Дубликат: %s\n", sym);
	sym1 = ft_strdup(dest);
	printf ("Дубликат: %s\n", sym1);
*/
/*	char src3[] = "test basic du memccpy !";
	char buff1[22];

	memset(buff1, 0, sizeof(buff1));
	char *r1 = memccpy(buff1, src3, 'm', 22);
	char *r2 = ft_memccpy(buff1, src3, 'm', 22);
	printf("%s\n",r1);
	printf("%s\n",r2);
*/
/*	char dst1[0xF0];
	char dst2[0xF0];
	char *data = "thiÃ Ã\xde\xad\xbe\xeftriÃ±g will be ÃžvÃ©rlapÃ©d !\r\n";
	int size = 0xF0 - 0xF;

	memset(dst1, 'A', sizeof(dst1));
	memset(dst2, 'A', sizeof(dst2));
	memcpy(dst1, data, strlen(data));
	memcpy(dst2, data, strlen(data));
	memmove(dst1 + 3, dst1, size);
	ft_memmove(dst2 + 3, dst2, size);
	printf("%s\n \n \n",dst1);
	printf("%s\n \n",dst2);
 */
/*	char *s1 = "\xff\xaa\xde\xffMACOSX\xff";
	char *s2 = "\xff\xaa\xde\x02";
	size_t size = 8;
	int i1 = ((memcmp(s1, s2, size) > 0) ? 1 : ((memcmp(s1, s2, size) < 0) ? -1 : 0));
	printf("%i\n",i1);
	int i2 = ((ft_memcmp(s1, s2, size) > 0) ? 1 : ((ft_memcmp(s1, s2, size) < 0) ? -1 : 0));
	printf("%i",i2);
*/
 //const char *largestring = "Foo Bar Bazerrr";
//const char *smallstring = "22";
//char *ptr;
//ptr = strnstr(largestring, smallstring, 15);
//printf("%s",ptr);
}
