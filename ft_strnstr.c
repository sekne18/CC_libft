/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 23:28:28 by jan               #+#    #+#             */
/*   Updated: 2024/10/10 17:22:22 by jsekne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <stdio.h>
	
int	main(void)
{
	char big[] = "aaabcabcd";
	char little[] = "cd";
	printf("%s\n", ft_strnstr(big, little, 8));
	return (0);
}
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*start;
	const char	*l;
	const char	*orig;
	size_t			l_len;

	if (ft_strlen(little) == 0)
		return ((char *)big);
	orig = big;
	while (*big && len-- > 0)
	{
		start = big;
		l = little;
		l_len = len+1;
		while (*l && *big && *l == *big && l_len-- > 0)
		{
			l++;
			big++;
		}
		if (*l == '\0')
			return ((char *)start);
		big = start + 1;
	}
	return (NULL);
}
