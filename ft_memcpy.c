/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:48:22 by jan               #+#    #+#             */
/*   Updated: 2024/10/06 22:36:24 by jans             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

int	main()
{
	char	src[] = "This is campus 19!";
	char	dest[19];
	ft_memcpy(dest, src, 0);
	printf("%s\n", dest);
	return (0);
}
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	while (*s && n-- > 0)
		*d++ = *s++;
	*d = '\0';
	return (dest);
}
