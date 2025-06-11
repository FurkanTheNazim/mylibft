/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 18:29:56 by marvin            #+#    #+#             */
/*   Updated: 2025/06/03 18:29:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t digit_count(int n)
{
	
	size_t count;
	long num;
	
	num = n;
	count = 0;
	if (num == 0)
		return 1;
	if (num < 0)
	{
		num = -num;
			count++;
	}
	while (num > 0)
	{
		num = num/10;
			count++;
	}
	return (count);
}
char *ft_itoa(int n)
{
	long num;
	char *ascii;
	size_t len;

	num = n;
	len = digit_count(n);

	// Negatifse işaret için ekstra yer ayır
	ascii = malloc(sizeof(char) * (len + 1));
	if (!ascii)
		return NULL;

	ascii[len] = '\0'; // Sonuna null karakteri koy

	// Negatifse işareti koy ve pozitife çevir
	if (num < 0)
	{
		ascii[0] = '-';
		num = -num;
	}

	// Sıfır için özel durum
	if (n == 0)
		ascii[0] = '0';

	// Rakamları sondan başa yerleştir
	while (num > 0)
	{
		ascii[--len] = (num % 10) + '0';
		num /= 10;
	}

	return ascii;
}


/*
int main(void)
{
    char *str;

    printf("--- ft_itoa Testleri ---\n\n");

    // Test Case 1: Pozitif Sayı
    printf("Test 1: Pozitif Sayı (12345)\n");
    str = ft_itoa(12345);
    if (str)
    {
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