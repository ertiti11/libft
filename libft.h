#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>


int	ft_atoi(const char *str);

void	ft_bzero(void *str, size_t n);


int	isalnum(int c);

int	ft_isalpha(int c);
void	*ft_calloc(size_t nmemb, size_t size);
int	isascii(int c);
char *ft_strjoin(char const *s1, char const *s2);
int	ft_isdigit(int c);

int	ft_isprint(int c);
char	*ft_strdup(const char *s);

void	*ft_memchr(const void *s, int c, size_t n);

int	ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);


void	*ft_memmove(void *str1, const void *str2, size_t n);

void	*ft_memset(void *b, int c, size_t len);

char	*ft_strchr(const char *str, int c);

int	ft_strcmp(const char *s1, const char *s2);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

size_t	ft_strlen(const char *str);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*ft_strrchr(const char *s, int c);

int	ft_tolower(int c);

int	ft_toupper(int c);

#endif