/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:23 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/14 10:23:22 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int		ft_strlen(const char *str);
int		ft_isalpha(char c);
int		ft_isdigit(char c);
int		ft_isprint(char c);
int		ft_isascii(char c);
int		ft_strncmp(char *s1, char *s2, size_t n);

char	ft_toupper(int c);
char	ft_tolower(int c);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(char *str, const char *substr, size_t len);
size_t	ft_strlcat(char *dest, const char *src, size_t n);

char	*ft_strdup(const char *str);
void	ft_bzero(void *s, size_t n);

char	*ft_itoa(int nb);
int		ft_atoi(const char *str);

#endif
