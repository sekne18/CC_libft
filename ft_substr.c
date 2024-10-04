/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 07:26:29 by jan               #+#    #+#             */
/*   Updated: 2024/10/02 14:10:27 by jan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, unsigned int len);

int	main()
{
	char s[] = "This is campus 19!";
	printf("%s\n", ft_substr(s, 8, 6));
	return (0);
}
*/

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
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
