/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmmous <mahmmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 11:58:18 by mahmmous          #+#    #+#             */
/*   Updated: 2025/06/01 11:58:18 by mahmmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *i;
    const unsigned char *j;

    if (dest    == src || n == 0)
        return dest;

    i = (unsigned char *)dest;
    j = (const unsigned char *)src;
    if (i > j && i < j + n)
    {
        while (n--)
        {
            *i++ = *j++;
        }
    }
    else
    {
       while (n--)
       {
            i[n] = j[n];
       }
    }
    return (dest);
}