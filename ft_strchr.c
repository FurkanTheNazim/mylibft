/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 20:10:38 by mahmmous          #+#    #+#             */
/*   Updated: 2025/06/16 17:08:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s;
	char	*a;
	char	*ret;

	s = "fractol";
	a = "fractol";
	ret = ft_strchr(s, 'a');
	printf("ret: %s\n", ret);
	ret = strchr(a, 'a');
	printf("ret: %s\n", ret);
}
*/