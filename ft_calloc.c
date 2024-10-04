/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 07:08:47 by jan               #+#    #+#             */
/*   Updated: 2024/10/02 07:25:25 by jan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
#include <stdio.h>

void	*ft_calloc(unsigned int nitems, unsigned int size);

int	main()
{
	char *arr = ft_calloc(5, sizeof(char));
	printf("%li\n", sizeof(arr));
	return (0);
}
*/
void	*ft_calloc(unsigned int nitems, unsigned int size)
{
	unsigned char	*arr;
	int				i;

	i = -1;
	if (size < 1)
		return (NULL);
	arr = malloc(nitems * size);
	if (!arr)
		return (NULL);
	while (nitems--)
		arr[++i] = 0;
	return (arr);
}
