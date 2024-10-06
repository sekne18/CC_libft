/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:22:46 by jan               #+#    #+#             */
/*   Updated: 2024/10/06 22:53:44 by jans             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	**ft_split(char const *s, char c);
char	*ft_strdup(char *str, int len);
int		count_word_len(const char *s, char c);

/*
int	main()
{
	int		i = -1;
	char s[] = "This is campus 19!";
	char **arr = ft_split(s, ' ');
	while (arr[++i])
		printf("%s\n", arr[i]);
	return (0);
}
*/
char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*start;
	int		i;

	i = 0;
	arr = malloc((count_word_len(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		start = (char *)s;
		while (*s && *s != c)
			s++;
		if (start < s)
			arr[i++] = ft_strdup(start, (s - start));
	}
	arr[i] = 0;
	return (arr);
}

int	count_word_len(const char *s, char c)
{
	int		len;
	char	*start;

	len = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		start = (char *)s;
		while (*s && *s != c)
			s++;
		if (start < s)
			len++;
	}
	return (len);
}

char	*ft_strdup(char *str, int len)
{
	char	*new;
	int		i;

	i = -1;
	new = malloc((len + 1) * sizeof(char));
	if (!new)
		return (NULL);
	while (str[++i] && len-- > 0)
		new[i] = str[i];
	new[i] = '\0';
	return (new);
}
