/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:48:22 by jan               #+#    #+#             */
/*   Updated: 2024/10/01 17:01:54 by jan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, unsigned int n);

int	main()
{
	char	src[] = "This is campus 19!";
	char	dest[19];
	ft_memcpy(dest, src, 0);
	printf("%s\n", dest);
	return (0);
}
*/
void	*ft_memcpy(void *dest, const void *src, unsigned int n)
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
