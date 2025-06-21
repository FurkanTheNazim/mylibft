/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 23:18:12 by marvin            #+#    #+#             */
/*   Updated: 2025/06/18 10:34:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	if (!dst && !src)
		return (NULL);
	d = (char *)dst;
	s = (char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/*
#include <stdio.h>

int main()
{
	char dest[5];
	const char *source = "selamlar";
	
	printf("Öncesi\n");
	printf("dest: %s\n", dest);
	printf("source: %s\n", source);
	printf("Sonrası\n");
	ft_memcpy(dest, source, 2);
	printf("dest: %s\n", dest);
	printf("source: %s\n", source);

}
*/