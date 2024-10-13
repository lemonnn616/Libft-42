/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iriadyns <iriadyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:00:25 by iriadyns          #+#    #+#             */
/*   Updated: 2024/10/11 14:13:50 by iriadyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	word_count;
	int	in_word;

	i = 0;
	word_count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && !in_word)
		{
			in_word = 1;
			word_count++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (word_count);
}

static char	*get_word(char const *s, char c, int *index)
{
	int		i;
	int		start;
	char	*word;

	while (s[*index] == c && s[*index])
		(*index)++;
	start = *index;
	while (s[*index] && s[*index] != c)
		(*index)++;
	word = malloc((*index - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < *index)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void	free_result(char **result, int count)
{
	while (count > 0)
		free(result[--count]);
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		word_count;
	int		index;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	index = 0;
	while (i < word_count)
	{
		result[i] = get_word(s, c, &index);
		if (!result[i])
		{
			free_result(result, i);
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}
