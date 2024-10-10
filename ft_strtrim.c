/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:06:22 by jan               #+#    #+#             */
/*   Updated: 2024/10/10 22:31:59 by jans             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		contains(char const *set, char c);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	char	*orig;
	int		len;
	int		i;

	if (!s1)
		return ((char *)s1);
	len = 0;
	while (contains(set, *s1))
		s1++;
	while (s1[len])
		len++;
	len--;
	while (contains(set, s1[len]))
		len--;
	new = malloc((++len + 1) * sizeof(char));
	if (!new)
		return (NULL);
	orig = new;
	i = 0;
	while (i < len)
		*new++ = s1[i++];
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
