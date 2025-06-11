/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 13:35:26 by mahmmous          #+#    #+#             */
/*   Updated: 2025/06/11 14:16:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_substr (char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t s_len;
    char *str;

    if (!s)
        return (NULL);
    s_len = ft_strlen(s);
    if (start >= s_len)
        return(ft_strdup(""));
    if (len > s_len - start)
        len =s_len - start;
    str = malloc (sizeof(char) * (len + 1));
    if(!str)
        return (NULL);
    i = 0;
    while (i < len && s[start + i])
    {
        str[i] = s[start + i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

