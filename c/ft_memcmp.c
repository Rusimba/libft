#include "libft.h"

int ft_memcmp (const void *arr1, const void *arr2, size_t n)
{
	int i;
	char * typal;
	char * ypal;

	typal = (unsigned char *)arr1;
	ypal = (unsigned char *)arr2;
	i = 0;
	while(i != n)
	{
		if(typal[i] - ypal[i] != 0)
		{
			return (typal[i] - ypal[i]);
		}
		i++;
	}
	return(0);
}