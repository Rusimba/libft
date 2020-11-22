/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstonesn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 10:06:23 by dstonesn          #+#    #+#             */
/*   Updated: 2020/09/30 19:39:52 by dstonesn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		len_to_c(char const *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] != '\0' && s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			n++;
		i++;
	}
	return (n);
}

static	int		strlen_to_c(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
	{
		i++;
	}
	return (i);
}

static	char	*get_word(char const **s, char c)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	while (**s == c)
		(*s)++;
	j = strlen_to_c(*s, c);
	ptr = (char*)malloc(sizeof(char) * (j + 1));
	if (!ptr)
		return (NULL);
	while (i < j)
	{
		ptr[i] = s[0][i];
		i++;
	}
	while (**s != c && **s)
		(*s)++;
	ptr[i] = '\0';
	return (ptr);
}

static	void	freez(char **srs, int i)
{
	size_t	j;

	j = 0;
	while (j < i)
	{
		free(srs[j]);
		srs[j] = NULL;
		j++;
	}
	free(srs);
	srs = NULL;
}

char			**ft_split(char const *s, char c)
{
	char	**res;
	char	*time;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	j = len_to_c(s, c);
	res = malloc(sizeof(char*) * (j + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < j)
	{
		time = get_word(&s, c);
		if (!time)
		{
			freez(res, i);
			return (NULL);
		}
		res[i] = time;
		i++;
	}
	res[i] = NULL;
	return (res);
}
