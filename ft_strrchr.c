/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmmous <mahmmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 11:56:54 by mahmmous          #+#    #+#             */
/*   Updated: 2025/06/01 12:04:06 by mahmmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*ptr;

	ptr = 0;
	while (*s)
	{
		if (*s == (unsigned char)c)
			ptr = (unsigned char *)s;
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return ((char *)ptr);
}