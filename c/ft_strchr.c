char *ft_strchr (const char *str, int ch)
{
	int i;
	char *p;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
		{
			return (p);
		}
		i++;
	}
	return(NULL);
}
