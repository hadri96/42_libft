/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:23 by hmorand           #+#    #+#             */
/*   Updated: 2023/08/09 23:47:54 by hmorand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int ft_strlen(char *str);
int ft_isalpha(char *str);
int ft_isdigit(char *str);
int ft_isprint(char *str);

char ft_toupper(int c);
char ft_tolower(int c);

char *ft_itoa(int nb);
int ft_atoi(char *str);

#endif
