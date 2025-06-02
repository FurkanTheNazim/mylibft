/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmmous <mahmmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 20:30:32 by mahmmous          #+#    #+#             */
/*   Updated: 2025/06/02 12:27:07 by mahmmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    unsigned int i;
    unsigned int j;
    char *str;

    i = 0;
    j = 0;
    str = malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!str)
        return (NULL);
    while ((s1[i] != '\0') && (s2[i] != '\0'))
        str[i++] = s1[j++];
    j = 0;
    while (s2[j] != '\0')
        str[i++] = s2[j++];
    str[i] = '\0';
    return (str);
}
