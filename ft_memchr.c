/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:34:11 by jan               #+#    #+#             */
/*   Updated: 2024/10/06 22:48:47 by jans             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n);

int	main()
{
	char str[] = "This is campus 19!";
	char c = '1';
	unsigned char *s = (unsigned char *)ft_memchr(str, c, 18);
	printf("%s\n", s);
	return (0);
}
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = s;
	while (*str && n-- > 0)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
	}
	return (0);
}
