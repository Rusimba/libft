void *ft_memmove (void *destination, const void *source, size_t n)
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
	}
	return(typal);
}
