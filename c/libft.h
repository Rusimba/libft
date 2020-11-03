#define LIBFT_H

#ifndef LIBFT_H

#include <stdlib.h>

int 	ft_atoi(const char *str);
void 	ft_bzero(void *s, size_t n);
void 	* ft_calloc(size_t arr,size_t num);
int 	ft_isalnum(int ch);
int 	ft_isalpha(int ch);
int 	ft_isascii(int ch);
int 	ft_isdigit(int ch);
int 	ft_isprint(int ch);
void 	*ft_memccpy (void *destination, const void *source, int c, size_t n);
void 	*ft_memchr (const void *arr, int c, size_t n);
int 	ft_memcmp (const void *arr1, const void *arr2, size_t n);
void 	*ft_memcpy(void *dest,const void *src,size_t n);
void 	*ft_memmove (void *destination, const void *source, size_t n);
void 	*ft_memset (void *destination, int c, size_t n);
char 	*ft_strchr (const char *str, int ch);
size_t 	ft_strlcat (char *dst ,const char *src, size_t size);
size_t 	ft_strlcpy(char * dst, const char *  src, size_t dstsize);
int		ft_strlen(char *str);
int 	ft_strncmp(const char *str1, const char *str2, size_t n);
char	* ft_strnstr(const char	*big, const char *little, size_t len);
char 	*ft_strchr (const char *str, int ch)
int 	ft_tolower(int c);
int 	ft_toupper(int c);
char 	*strdup(const char *str);

#endif