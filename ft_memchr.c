/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 09:50:11 by marvin            #+#    #+#             */
/*   Updated: 2025/06/13 09:50:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *j;
    
    j = (unsigned char *)s;
    i = 0;
    while(i < n)
    {
        if(j[i] == (unsigned char)c)
            return (&j[i]);
        i++;
    }
    return (NULL);
}