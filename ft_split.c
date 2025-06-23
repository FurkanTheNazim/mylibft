/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmmous <mahmmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 19:09:26 by marvin            #+#    #+#             */
/*   Updated: 2025/06/23 17:10:28 by mahmmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
    size_t	i = 0;
    size_t	w_count = 0;

    while (s[i])
    {
        while (s[i] && s[i] == c)
            i++;
        if (s[i] && s[i] != c)
        {
            w_count++;
            while (s[i] && s[i] != c)
                i++;
        }
    }
    return (w_count);
}

static char	*word_dup(const char *s, size_t start, size_t end)
{
    char	*word;
    size_t	i = 0;

    word = malloc(end - start + 1);
    if (!word)
        return (NULL);
    while (start < end)
        word[i++] = s[start++];
    word[i] = '\0';
    return (word);
}

static void	free_all(char **arr, size_t j)
{
    while (j--)
        free(arr[j]);
    free(arr);
}

char	**ft_split(char const *s, char c)
{
	size_t	i = 0, j = 0, start = 0;
	size_t	words;
	char	**arr;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	arr = malloc(sizeof(char *) * (words + 1));
	if (!arr)
		return (NULL);
	while (s[i] && j < words)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			arr[j] = word_dup(s, start, i);
			if (!arr[j++])
			{
				free_all(arr, j - 1);
				return (NULL);
			}
		}
	}
	arr[j] = NULL;
	return (arr);
}
