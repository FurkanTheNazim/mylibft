/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 18:29:56 by marvin            #+#    #+#             */
/*   Updated: 2025/06/18 09:56:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	len;

	len = 1;
	while (n / 10)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		len;

	nb = n;
	len = ft_numlen(n);
	if (n < 0)
	{
		nb = -nb;
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = nb % 10 + '0';
		nb /= 10;
		if (n < 0 && len == 0)
			str[len] = '-';
	}
	return (str);
}
/*
#include <stdio.h>
 main'de sıkıntım vaaaaaaaaaaaaaaaaaaaar!
int	main(void)
{
	char	*str;

	printf("--- ft_itoa Testleri ---\n\n");
	// Test Case 1: Pozitif Sayı
	printf("Test 1: Pozitif Sayı (12345)\n");
	str = ft_itoa(12345);
	
		printf("Beklenen: \"12345\" | Çıkan: \"%s\"\n", str);
		free(str); // Belleği serbest bırak
	}
	else
		printf("Hata: malloc başarısız oldu veya NULL döndü.\n");
	printf("---\n");
	// Test Case 2: Negatif Sayı (-6789)
	printf("Test 2: Negatif Sayı (-6789)\n");
	str = ft_itoa(-6789);
	if (str)
	{
		printf("Beklenen: \"-6789\" | Çıkan: \"%s\"\n", str);
		free(str);
	}
	else
		printf("Hata: malloc başarısız oldu veya NULL döndü.\n");
	printf("---\n");
	// Test Case 3: Sıfır (0)
	printf("Test 3: Sıfır (0)\n");
	str = ft_itoa(0);
	if (str)
	{
		printf("Beklenen: \"0\" | Çıkan: \"%s\"\n", str);
		free(str);
	}
	else
		printf("Hata: malloc başarısız oldu veya NULL döndü.\n");
	printf("---\n");
	// Test Case 4: Tek Basamaklı Pozitif (5)
	printf("Test 4: Tek Basamaklı Pozitif (5)\n");
	str = ft_itoa(5);
	if (str)
	{
		printf("Beklenen: \"5\" | Çıkan: \"%s\"\n", str);
		free(str);
	}
	else
		printf("Hata: malloc başarısız oldu veya NULL döndü.\n");
	printf("---\n");
	// Test Case 5: Tek Basamaklı Negatif (-8)
	printf("Test 5: Tek Basamaklı Negatif (-8)\n");
	str = ft_itoa(-8);
	if (str)
	{
		printf("Beklenen: \"-8\" | Çıkan: \"%s\"\n", str);
		free(str);
	}
	else
		printf("Hata: malloc başarısız oldu veya NULL döndü.\n");
	printf("---\n");
	// Test Case 6: INT_MAX (En Büyük int Değeri)
	printf("Test 6: INT_MAX (%d)\n", INT_MAX);
	str = ft_itoa(INT_MAX);
	if (str)
	{
		printf("Beklenen: \"%d\" | Çıkan: \"%s\"\n", INT_MAX, str);
		free(str);
	}
	else
		printf("Hata: malloc başarısız oldu veya NULL döndü.\n");
	printf("---\n");
	// Test Case 7: INT_MIN (En Küçük int Değeri)
	// Bu test, long num kullanmanın önemini gösterir.
	printf("Test 7: INT_MIN (%d)\n", INT_MIN);
	str = ft_itoa(INT_MIN);
	if (str)
	{
		printf("Beklenen: \"%d\" | Çıkan: \"%s\"\n", INT_MIN, str);
		free(str);
	}
	else
		printf("Hata: malloc başarısız oldu veya NULL döndü.\n");
	printf("---\n");
	printf("Tüm testler tamamlandı.\n");
	return (0);
}
*/