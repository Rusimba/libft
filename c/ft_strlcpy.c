#include "libft.h"

size_t ft_strlcpy(char * dst, const char *  src, size_t dstsize)
{
	int i;
	int j;
	int k;

	j = 0;
	i = 0;
	k = 0;
	while(dst[i] != '\0')
	{
		i++;
	}
	while(src[k] != '\0')
	{
		k++;
	}
	while (j != dstsize)
	{
		dst[i] = src[j];
		j++;
	}
	return(k);
}
