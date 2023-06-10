/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylemrab <aylemrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 01:20:11 by aylemrab          #+#    #+#             */
/*   Updated: 2023/06/08 11:21:26 by aylemrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int						i;
	int						sn;
	unsigned long long int	rs;

	rs = 0;
	sn = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sn *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		rs = rs * 10 + (str[i] - 48);
		i++;
		if (rs > 18446744073709551615ULL && sn == -1)
			return (0);
		if (rs > 18446744073709551615ULL)
			return (-1);
	}
	return ((int)rs * sn);
}
