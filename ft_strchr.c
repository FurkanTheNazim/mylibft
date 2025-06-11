/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 20:10:38 by mahmmous          #+#    #+#             */
/*   Updated: 2025/06/05 23:19:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strchr(const char *s, int c)
{
    while(*s)
    {
        if(*s == c)
            return (char *) s;
        s++;
    }
    return NULL;
}

/*#include <stdio.h>
#include <string.h>

int main()
{
    char *s = "fractol";
    char *a = "fractol";
    char *ret = ft_strchr(s, 'a');
    printf("ret: %s\n", ret);
    ret = strchr(a, 'a');
    printf("ret: %s\n", ret);
}
    */