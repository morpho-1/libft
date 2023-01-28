/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylemrab <aylemrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:36:18 by aylemrab          #+#    #+#             */
/*   Updated: 2022/11/13 21:19:10 by aylemrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	char	*all;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	all = malloc(sizeof (char) * len);
	p = all;
	if (!all)
		return (NULL);
	while (*s1)
		*all++ = *s1++;
	while (*s2)
		*all++ = *s2++;
	*all = '\0';
	return (p);
}
