void *ft_memchr (const void *arr, int c, size_t n)
{
	int i;
	unsigned char * typal;

	typal = (unsigned char*) arr;
	i = 0;
	while (i != n)
	{
		if(typal[i] == c)
		{
			return (&typal[i]);
		}
		i++;
	}
	return(NULL);
}

