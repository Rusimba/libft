#include "libft.h"
#include <string.h>
#include <stdlib.h>
char *ft_strdup(const char *str)
{
	char *ptr;
	int i;

	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	ptr = (char *)malloc(sizeof(*str));
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}

	if(ptr == NULL)
	{
		return (NULL);
	}
	return(ptr);
}
