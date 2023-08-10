/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:23 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/10 18:49:40 by hmorand          ###   ########.fr       */
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

char	*ft_itoa(int nb);
int		ft_atoi(char *str);

#endif
