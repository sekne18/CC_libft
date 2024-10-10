/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 23:12:06 by jan               #+#    #+#             */
/*   Updated: 2024/10/10 17:52:20 by jsekne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size );

int	main()
{
	char dest[30];
	memset(dest, '0', 30);
    memset(dest, 'C', 5);
	const char *src = "AAAAAAAAA";
    unsigned int result = ft_strlcat(dest, src, -1);
    printf("Concatenated string: %s\n", dest);
    printf("Length of the attempted string: %i\n", result);
	return (0);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	int		src_len;
	int		cpy_len;

	dst_len = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	while (dst[dst_len] != '\0')
		dst_len++;
	if (dst_len >= size)
		return (src_len + size);
	cpy_len = size - dst_len - 1;
	if (cpy_len > 0)
	{
		if (cpy_len > src_len)
			cpy_len = src_len;
		dst += dst_len;
		while (*src && cpy_len--)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (dst_len + src_len);
}
