
#include "libft.h"

static	int		row(char const *s, char c)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			n++;
		i++;
	}
	return (n);
}

static	int		chr_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static	char	*get_word(char const **s, char c)
{
	size_t	i;
	size_t	len;
	char	*ptr;

	i = 0;
	while (**s == c)
		(*s)++;
	len = chr_len(*s, c);
	ptr = (char*)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	while (i < len)
	{
		ptr[i] = s[0][i];
		i++;
	}
	ptr[i] = '\0';
	while (**s != c && **s)
		(*s)++;
	return (ptr);
}

static	void	free_dst(char **dst, size_t i)
{
	size_t	j;

	j = 0;
	while (j < i)
	{
		free(dst[j]);
		dst[j] = NULL;
		j++;
	}
	free(dst);
	dst = NULL;
}

char			**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	num;
	char	**dst;
	char	*ptr;

	i = 0;
	if (!s)
		return (NULL);
	num = row(s, c);
	dst = (char**)malloc(sizeof(char*) * (num + 1));
	if (!dst)
		return (NULL);
	while (i < num)
	{
		ptr = get_word(&s, c);
		if (!ptr)
		{
			free_dst(dst, i);
			return (NULL);
		}
		dst[i] = ptr;
		i++;
	}
	dst[i] = NULL;
	return (dst);
}