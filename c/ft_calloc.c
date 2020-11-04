#include "libft.h"
#include <string.h>

void * ft_calloc(size_t arr,size_t num)
{
	void *mem = (void *)malloc(arr * num);
	if (mem == NULL)
	{
		return (NULL);
	}
	ft_memset(mem,num,arr);
	return(mem);
}


