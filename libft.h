/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:09:03 by hmorand           #+#    #+#             */
/*   Updated: 2024/04/26 15:09:37 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdarg.h>
# include "garbage.h"
# include "get_next_line.h"

/* ************************************************************************** */
/*                                                                            */
/*                                     IS                                     */
/*                                                                            */
/* ************************************************************************** */

size_t			ft_strlen(const char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isprint(int c);
int				ft_isascii(int c);
int				ft_strncmp(char *s1, char *s2, size_t n);

/* ************************************************************************** */
/*                                                                            */
/*                                   STRING                                   */
/*                                                                            */
/* ************************************************************************** */

int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
char			*ft_strnstr(const char *str, const char *substr, size_t len);
size_t			ft_strlcat(char *dest, const char *src, size_t n);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_strjoin(char const *s1, char const *s2);
char			**ft_split(char const *s, char c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*join_argv(char **argv, int argc);

/* ************************************************************************** */
/*                                                                            */
/*                                   MEMORY                                   */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strdup(const char *str);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memset(void *s, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);
void			free_strarr(char **arr);

char			*ft_itoa(int nb);
int				ft_atoi(const char *str);
long long		ft_atoll(const char *str);

/* ************************************************************************** */
/*                                                                            */
/*                                    PUTS                                    */
/*                                                                            */
/* ************************************************************************** */

void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

/* ************************************************************************** */
/*                                                                            */
/*                               LINKED_LISTS                                 */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list			*ft_lstnew(void *content);
int				ft_lstsize(t_list *lst);
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstadd_back(t_list **lst, t_list *new);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *ls, void *(*f)(void *), void (*del)(void *));

/* ************************************************************************** */
/*                                                                            */
/*                                ARR_UTILS                                   */
/*                                                                            */
/* ************************************************************************** */

int				strarr_len(char **arr);
char			**arr_insert(char **arr, int pos, char *elem);
char			**strarr_pop(char **arr, int index);

/* ************************************************************************** */
/*                                                                            */
/*                                 PRINT_F                                    */
/*                                                                            */
/* ************************************************************************** */

void			ft_putchar(char c, int *i);
void			ft_putstr(char *str, int *i);
void			ft_putnbr(int nb, int *i);
void			ft_putunnbr(unsigned int nb, int *i);
void			ft_puthex_long(long unsigned int nb, int *i);
void			ft_puthex_up(unsigned int nb, int *i);
void			ft_puthex_low(unsigned int nb, int *i);
void			ft_putptr(void *ptr, int *i);
int				ft_printf(const char *str, ...);

/* ************************************************************************** */
/*                                                                            */
/*                                 NUMBERS                                    */
/*                                                                            */
/* ************************************************************************** */

int				min(int count, ...);
int				max(int count, ...);

#endif
