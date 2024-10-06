/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:19:06 by jan               #+#    #+#             */
/*   Updated: 2024/10/06 22:53:10 by jans             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linft.h"

/*
char *ft_strjoin(char const *s1, char const *s2);

int	main()
{
	char str1[] = "";
	char str2[] = "";
	printf("%s\n", ft_strjoin(str1, str2));
	return (0);
}
*/
int	str_length(const char *s1, const char *s2);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*arr;
	int		i;

	i = 0;
	arr = malloc((str_length(s1, s2) + 1) * sizeof(char));
	while (*s1)
		arr[i++] = *s1++;
	while (*s2)
		arr[i++] = *s2++;
	arr[i] = '\0';
	return (arr);
}

int	str_length(const char *s1, const char *s2)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (s1[i])
		i++;
	while (s2[len])
		len++;
	return (i + len);
}
