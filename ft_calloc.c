/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 11:57:05 by mahmmous          #+#    #+#             */
/*   Updated: 2025/06/19 14:31:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
    size_t	total_size;
    void	*p;

    if (count == 0 || size == 0)
        return (NULL);

    if (count > ((size_t)-1) / size)
        return (NULL);

    total_size = count * size;
    p = malloc(total_size);
    if (!p)
        return (NULL);

    ft_bzero(p, total_size);
    return (p);
}

{

}
