/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   galloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:19:05 by hmorand           #+#    #+#             */
/*   Updated: 2024/02/22 15:19:05 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

/* Gracefully adapted from our very own rude-jes */
/* (Github: https://github.com/RPDJF/betterft/)  */

#include "../libft.h"

void	*galloc(size_t size)
{
	return (addgarbage(malloc(size)));
}
