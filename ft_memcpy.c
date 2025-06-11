/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 23:18:12 by marvin            #+#    #+#             */
/*   Updated: 2025/06/05 23:18:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *j;
    unsigned char *k;

    j = (unsigned char *)dest;
    k = (unsigned char *)src;
    i = 0;
    while (i < n)
    {
        j[i] = k[i];
        i++;
    }
    return (dest);
}