/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 23:28:28 by jan               #+#    #+#             */
/*   Updated: 2024/10/06 22:50:59 by jans             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len);

int	main(void)
{
	char big[] = "This is campus 19!";
	char little[] = "s campus";
	printf("%s\n", ft_strnstr(big, little, 18));
	return (0);
}
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*start;
	const char	*l;
	const char	*orig;

	orig = big;
	while (*big && len-- > 0)
	{
		start = big;
		l = little;
		while (*l && *big && *l == *big)
		{
			l++;
			big++;
		}
		if (*l == '\0')
			return ((char *)start);
		big = start + 1;
	}
	return ((char *)orig);
}
