/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 07:08:47 by jan               #+#    #+#             */
/*   Updated: 2024/10/10 16:43:57 by jsekne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "limits.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	unsigned char	*arr;
	int				i;

	i = -1;
	if (size == 0 || nitems == 0)
		arr = malloc(1);
	else if (nitems > INT_MAX / size)
		return (NULL);
	else 
		arr = malloc(nitems * size);
	if (!arr)
		return (NULL);
	return (arr);
}
