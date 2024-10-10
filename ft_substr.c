/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 07:26:29 by jan               #+#    #+#             */
/*   Updated: 2024/10/10 22:48:23 by jans             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*orig;

	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	orig = str;
	while (s[start] && len-- > 0)
		*str++ = s[start++];
	*str = '\0';
	return (orig);
}
