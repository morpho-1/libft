/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylemrab <aylemrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:21:56 by aylemrab          #+#    #+#             */
/*   Updated: 2022/11/14 12:14:45 by aylemrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	length;

	if (dst == 0 && dstsize == 0)
		return (ft_strlen(src));
	length = ft_strlen(dst);
	if (dstsize != 0 && length < dstsize)
	{
		i = 0;
		while ((i + length) < (dstsize - 1) && src[i] != '\0')
		{
			dst[i + length] = src[i];
			i++;
		}
		dst[i + length] = '\0';
		return (length + ft_strlen(src));
	}
	return (ft_strlen(src) + dstsize);
}
