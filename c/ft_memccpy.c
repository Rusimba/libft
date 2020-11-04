#include "libft.h"

void *ft_memccpy (void *destination, const void *source, int c, size_t n)
{
	int i;
	unsigned char * typal;
	unsigned char * ypal;
	unsigned int ge;

	ge = (unsigned int)c;
	typal = (unsigned char *)destination;
	ypal = (unsigned char*)source;
	i = 0;
	while(i != n)
	{

		typal[i] = ypal[i];
		i++;
		if(ypal[i] == ge)
		{
			typal[i] = ypal[i];
			return(typal);
		}
	}
	return(typal);
}

