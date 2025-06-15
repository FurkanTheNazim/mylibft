/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 18:33:06 by marvin            #+#    #+#             */
/*   Updated: 2025/06/13 18:33:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putnbr_fd(int n, int fd)
{
    long num;

    num = n;
    if (num < 0)
    {
        ft_putchar_fd('-', fd);
        num = -num;
    }
    if (num >= 0 && num <= 9)
        ft_putchar_fd(num + '0', fd);
    else
    {
        ft_putnbr_fd(num / 10, fd);
        ft_putchar_fd((num % 10) + '0', fd);
    }
} 