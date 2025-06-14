/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 10:54:56 by marvin            #+#    #+#             */
/*   Updated: 2025/06/13 10:54:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_bzero(void *s, size_t n)
 {
    size_t i;
    unsigned char *j;

    j = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        j[i] = (unsigned char)0;
        i++;
    }
 }