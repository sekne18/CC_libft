/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:38:06 by jan               #+#    #+#             */
/*   Updated: 2024/09/29 18:57:06 by jan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*new;
	int		len;

	while (s[len])
		len++;
	new = malloc((len + 1) * sizeof(char));
	len = -1;
	while (s[++len])
		new[len] = s[len];
	new[len] = '\0';
	return (new);
}
