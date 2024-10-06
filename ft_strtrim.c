/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:06:22 by jan               #+#    #+#             */
/*   Updated: 2024/10/06 22:53:27 by jans             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int		contains(char const *set, char c);
char	*ft_strtrim(char const *s1, char const *set);

/*
int	main()
{
	printf("%s\n", ft_strtrim("...JANS....", "."));
	printf("%s\n", ft_strtrim(".\0...", "\0"));
	printf("%s\n", ft_strtrim(".  asdasd..", ""));
	return (0);
}
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	char	*orig;
	int		len;

	len = 0;
	while (contains(set, *s1))
		s1++;
	while (s1[len])
		len++;
	while (contains(set, s1[len]))
		len--;
	new = malloc((len + 1) * sizeof(char));
	if (!new)
		return (NULL);
	orig = new;
	len = 0;
	while (s1[len] && !contains(set, s1[len]))
		*new++ = s1[len++];
	*new = '\0';
	return (orig);
}

int	contains(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}
