/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylemrab <aylemrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:17:12 by aylemrab          #+#    #+#             */
/*   Updated: 2023/06/02 22:59:30 by aylemrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	size;
	size_t	i;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start >= size)
		return (ft_strdup(""));
	if (len > size)
		len = (size - start);
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (*s != '\0' && i != start)
	{
		i++;
		s++;
	}
	ft_strlcpy(p, s, len + 1);
	return (p);
}
