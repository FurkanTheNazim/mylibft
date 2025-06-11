/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 13:35:26 by mahmmous          #+#    #+#             */
/*   Updated: 2025/06/09 18:48:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_substr (char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *str;

    str = malloc (sizeof(char) * (ft_strlen(s) - start + 1));
    if (!s)
        return (NULL);
    i = 0;
    while (i < len)
    {
        str[i++] = s[start++];
    }
    return (str);
}
#include <stdio.h>
int main()
{
    char *pot = "furkan harikasin";
    printf("subs: %s\n", ft_substr(pot, 2, 7));

