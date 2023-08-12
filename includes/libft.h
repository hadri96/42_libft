/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:23 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/12 17:06:52 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int		ft_strlen(char *str);
int		ft_isalpha(char *str);
int		ft_isdigit(char *str);
int		ft_isprint(char *str);
int		ft_isascii(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, size_t n);

char	ft_toupper(int c);
char	ft_tolower(int c);
char	*ft_strchr(char *str, int c);
char	*ft_strrchr(char *str, int c);
char	*ft_strstr(char *str, char *substr);
char	*ft_strnstr(char *str, const char *substr, size_t len);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t n);
char	*ft_strcpy(char *dest, const char *src);
char 	*ft_strncpy(char *dest, const char *src, size_t n);

void	ft_bzero(void *s, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);

char	*ft_itoa(int nb);
int		ft_atoi(char *str);

#endif
