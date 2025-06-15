/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 19:09:26 by marvin            #+#    #+#             */
/*   Updated: 2025/06/06 19:09:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
static size_t count_words(char const *s, char c) //static 
{
    size_t i; // index
    size_t w_count; //kelime sayar

    i = 0;
    w_count = 0;
    while (s[i] || s[i] == c)
    {
		while (s[i] && s[i] == c)
            i++;
        if ( s[i] && s[i] != c)
		{
            w_count++;
            while (s[i] && s[i] != c)
                i++;
        }
    }
    return (w_count);
}

char **ft_split(char const *s, char c)
{
    size_t words;
    char **mem;

    if (!s)
        return (NULL);
    words = count_words(s, c);
    mem = malloc (sizeof(char) * words + 1);
    if (!mem)
        return (NULL); 
    return (mem);
}
