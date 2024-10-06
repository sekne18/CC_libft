/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:40:25 by jan               #+#    #+#             */
/*   Updated: 2024/10/06 22:05:34 by jans             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>

void	ft_bzero(void *s, size_t n);

int main()
{
	char str[] = "This is campus 19!";
	printf("%s\n", str);
	ft_bzero(str, 18);	
	printf("%s\n", str);
	return (0);
}
*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = s;
	while (*str && n-- > 0)
		*str++ = 0;
}
