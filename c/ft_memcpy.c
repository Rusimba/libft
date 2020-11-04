#include "libft.h"

void *ft_memcpy(void *dest,const void *src,size_t n)
{
	int i;
	unsigned char * typal;
	unsigned char * ypal;

	typal = (unsigned char *)dest;
	ypal = (unsigned char *)src;
	i = 0;
	if(dest == 0 && src == 0)
	{
		return(NULL);
	}
	while(i != n)
	{
		typal[i] = ypal[i];
		i++;
	}
	return(typal);
}
