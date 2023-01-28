/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylemrab <aylemrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:13:35 by aylemrab          #+#    #+#             */
/*   Updated: 2022/11/13 15:13:41 by aylemrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (*s)
		f(i++, s++);
}

// void f(unsigned int add, char *s)
// {
// 	(void) add;
// 	printf("%s\n", s);
// }
// int main()
// {
// 	char	*tab = {"1337"};
// 	void (*fun)(unsigned int, char*) = &f;

// 	ft_striteri(tab, fun);
// }