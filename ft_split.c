/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylemrab <aylemrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:30:40 by aylemrab          #+#    #+#             */
/*   Updated: 2022/11/18 18:33:26 by aylemrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(const char *str, char c)
{
	int	i;
	int	stop;

	i = 0;
	stop = 0;
	while (*str)
	{
		if (*str != c && stop == 0)
		{
			stop = 1;
			i++;
		}
		else if (*str == c)
			stop = 0;
		str++;
	}
	return (i);
}

static void	free_words(size_t j, char **ptr)
{
	while (j)
	{
		free(ptr[j]);
		j--;
	}
	free(ptr);
}

static char	*word(const char *str, int begin, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - begin + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (begin < end)
		word[i++] = str[begin++];
	word[i] = '\0';
	return (word);
}

static char	**splip(char const *s, char c, size_t i, char **split)
{
	size_t	j;
	int		index;

	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j] = word(s, index, i);
			if (!split[j])
				return (free_words(j - 1, split), NULL);
			index = -1;
			j++;
		}
		i++;
	}
	return (split[j] = 0, split);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	i = 0;
	j = 0;
	index = -1;
	split = malloc((count(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	split = splip(s, c, i, split);
	return (split);
}
