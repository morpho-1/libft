/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylemrab <aylemrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:46:24 by aylemrab          #+#    #+#             */
/*   Updated: 2022/11/14 11:31:33 by aylemrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*e;

	e = (char *)str;
	i = 0;
	while (i < n)
	{
		e[i] = (char)c;
		i++;
	}
	str = (void *)e;
	return (str);
}
