/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylemrab <aylemrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:51:52 by aylemrab          #+#    #+#             */
/*   Updated: 2022/11/12 12:43:09 by aylemrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*begin;
	const char	*fin;
	size_t		l;

	if (!s1 || !set)
		return (NULL);
	l = ft_strlen(s1);
	begin = s1;
	fin = s1 + l - 1;
	while (*begin && ft_strchr(set, *begin))
		begin++;
	if (begin == s1 + l)
		return (ft_strdup(""));
	while (*fin && ft_strchr(set, *fin))
		fin--;
	return (ft_substr(begin, 0, fin - begin + 1));
}
