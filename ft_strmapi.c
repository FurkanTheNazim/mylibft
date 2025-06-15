/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:23:23 by marvin            #+#    #+#             */
/*   Updated: 2025/06/11 10:23:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *string;
    size_t i;

    if (!s || !f)
        return (NULL);
    string = malloc(sizeof(char) * ft_strlen(s) + 1);
    if (!string)
        return (NULL);
    i = 0;
    while (s[i] != '\0')
    {
        string[i] = f(i, s[i]);
        i++;
    }
    string[i] = '\0';
    return (string);
}
char my_func(unsigned i, char c)
{
    if (i % 2 == 0)
        return ft_toupper(c);
    else
        return ft_tolower(c);
}
#include <stdio.h>
int main(void)
{
    char *s = "Hello42";
    char *result = ft_strmapi(s, my_func);

    if (result)
    {
        printf("Orjinal %s\n", s);
        printf("Sonuç  %s\n", result);
        free(result);
    }
    
}