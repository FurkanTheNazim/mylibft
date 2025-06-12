/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:59:50 by marvin            #+#    #+#             */
/*   Updated: 2025/06/12 10:59:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t i;

    if (!s || !f)
        return;

    i = 0;
    while (i < ft_strlen(s))
    {
        f(i, &s[i]);
        i++;
    }

}
