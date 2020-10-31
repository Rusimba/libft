void *ft_memccpy (void *destination, const void *source, int c, size_t n)
{
	int i;
	unsigned char * typal;
	unsigned char * ypal;

	typal = (unsigned char *)destination;
	ypal = (unsigned char*)source;
	i = 0;
	while(i != n)
	{

		typal[i] = ypal[i];
		i++;
		if(ypal[i] == c)
		{
			typal[i] = ypal[i];
			return(typal);
		}
	}
	return(typal);
}

