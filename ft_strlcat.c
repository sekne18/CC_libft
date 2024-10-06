/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 23:12:06 by jan               #+#    #+#             */
/*   Updated: 2024/10/06 23:31:29 by jans             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size );

int	main()
{
	char dest[19] = "This is";
    const char *src = " campus 19!";
    unsigned int result = ft_strlcat(dest, src, sizeof(dest));
    printf("Concatenated string: %s\n", dest);
    printf("Length of the attempted string: %i\n", result);
	return (0);
}
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	int		src_len;
	int		cpy_len;

	dst_len = 0;
	src_len = 0;
	while (src[src_len])
		src_len++;
	while (dst[dst_len])
		dst_len++;
	if (dst_len >= size)
		return (size + dst_len);
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
