/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:25:43 by mahmmous          #+#    #+#             */
/*   Updated: 2025/06/05 23:23:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;

    if (!s1 && !set)
        return (NULL);
    while (ft_strchr (set, s1))
    	s1++;
    i = ft_strlen(s1); 
    while (ft_strrchr (set, s1[i]))
		i--;
	return(ft_strdup(s1));
     
}
#include <stdio.h>
int main()
{
    char *str = "fr42fr"; // burada baştaki fr ve sondaki fr'yi trimleyip bana ortada kalan 42'yi vermesi amaçlanıyor
    printf("öncesi: \n", str);
    char *ret = ft_strtrim(str, "fr");
    printf("sonrasi: \n", str);
}

