/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 23:28:28 by jan               #+#    #+#             */
/*   Updated: 2024/10/02 07:08:20 by jan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, unsigned int len);

int	main(void)
{
	char big[] = "This is campus 19!";
	char little[] = "s campus";
	printf("%s\n", ft_strnstr(big, little, 18));
	return (0);
}
*/
char	*ft_strnstr(const char *big, const char *little, unsigned int len)
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
