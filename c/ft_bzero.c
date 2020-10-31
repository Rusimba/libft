#include "libft.h"
void ft_bzero(void *s, size_t n)
{
	int i;
	char * jam;
	i = 0;
	jam = s;
	while(i<n)
	{
		jam[i] = '\0';
		i++;
	}
}
