/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprieto- <aprieto-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:53:46 by aprieto-          #+#    #+#             */
/*   Updated: 2023/06/08 18:28:49 by aprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdbool.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);
char				*ft_itoa(int n);
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
char				**ft_split(const char *str, char separator);
char				*ft_strjoin(char const *s1, char const *s2);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void *));
int					ft_lstsize(t_list *lst);
void				ft_putstr_fd(char *s, int fd);
void				ft_bzero(void *str, size_t n);
void				ft_putchar_fd(char c, int fd);
int					ft_isalnum(int c);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
int					ft_isalpha(int c);
void				ft_putendl_fd(char *s, int fd);
void				*ft_calloc(size_t nmemb, size_t size);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(char const *s, unsigned int start, size_t len);
int					ft_isascii(int c);
char				*ft_strjoin(char const *s1, char const *s2);
int					ft_isdigit(int c);
int					ft_isprint(int c);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
t_list				*ft_lstlast(t_list *lst);
char				*ft_strdup(const char *s);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *str1, const void *str2, size_t n);
void				*ft_memset(void *b, int c, size_t len);
char				*ft_strchr(const char *str, int c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t				ft_strlen(const char *str);
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);
char				*ft_strrchr(const char *s, int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_putnbr_fd(int n, int fd);
#endif