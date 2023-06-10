/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylemrab <aylemrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:11:56 by aylemrab          #+#    #+#             */
/*   Updated: 2023/06/02 22:58:45 by aylemrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

static	char	*conv(char *p, int n, int len)
{
	int	i;

	i = len;
	while (n)
	{
		p[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (p[i] = '\0', p);
}

static	int	count(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i = 1;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*p;

	if (n <= -2147463648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
	{
		p = (char *)malloc(sizeof(char) + 1);
		if (!p)
			return (NULL);
		return (p[1] = '\0', p[0] = '0', p);
	}
	len = count(n);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		p[0] = '-';
	}
	if (n > 0)
		p = conv(p, n, len);
	return (p);
}
