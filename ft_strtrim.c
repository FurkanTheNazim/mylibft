/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:25:43 by mahmmous          #+#    #+#             */
/*   Updated: 2025/06/11 14:26:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;

    if (!s1 || !set)
        return (NULL);
    start = 0;
    end = ft_strlen(s1);
    while (s1[start] && ft_strchr(set, s1[start]))
    	start++; 
    while (end > start && ft_strchr(set, s1[end -1]))
		end--;
	return (ft_substr(s1, start, end - start));
     
}
#include <stdio.h>

int main()
{
    char *str = "fr42fr";
    char *ret = ft_strtrim(str, "fr");
    printf("öncesi: %s\n", str);
    printf("sonrasi: %s\n", ret);
    free(ret);
    return 0;
}