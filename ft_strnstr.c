/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylemrab <aylemrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 09:47:25 by aylemrab          #+#    #+#             */
/*   Updated: 2022/11/03 17:24:54 by aylemrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t slen)
{
	size_t	i;
	size_t	c;
	size_t	len;
	char	*haystack;

	i = 0;
	haystack = (char *)big;
	len = ft_strlen(little);
	if (len == 0 || big == little)
		return (haystack);
	while (haystack[i] != '\0' && i < slen)
	{
		c = 0;
		while (haystack[i + c] != '\0' && little[c] != '\0'
			&& haystack[i + c] == little[c] && i + c < slen)
			c++;
		if (c == len)
			return (haystack + i);
		i++;
	}
	return (NULL);
}
