/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:17:49 by jan               #+#    #+#             */
/*   Updated: 2024/10/02 14:18:55 by jan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

int	main()
{
	char	dest[19];
	char	src[] = "This is campus 19!";
	ft_memmove(dest, src, 19);
	printf("%s\n", dest);
	return (0);
}
*/
void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	const unsigned char	*s;
	unsigned char		*d;
	unsigned int		i;

	i = -1;
	s = src;
	d = dest;
	if (d > s && d < s + n)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		while (++i < n)
			d[i] = s[i];
	}
	return (dest);
}
