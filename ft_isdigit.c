/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 10:55:39 by marvin            #+#    #+#             */
/*   Updated: 2025/06/19 14:43:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}


#include <stdio.h>
int main()
{
	printf("isasci?: %d\n", ft_isdigit('a'));
	printf("isasci?: %d\n", ft_isdigit('i'));
	printf("isasci?: %d\n", ft_isdigit('v'));
	printf("isasci?: %d\n", ft_isdigit('g'));
	printf("isasci?: %d\n", ft_isdigit('s'));
	printf("isasci?: %d\n", ft_isdigit(','));
	printf("isasci?: %d\n", ft_isdigit('A'));
	printf("isasci?: %d\n", ft_isdigit('2'));
	printf("isasci?: %d\n", ft_isdigit('	'));
	printf("isasci?: %d\n", ft_isdigit(' '));
	printf("isasci?: %d\n", ft_isdigit('2'));
}