/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jans <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 09:04:46 by jans              #+#    #+#             */
/*   Updated: 2024/10/06 21:22:34 by jans             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

int main()
{

}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;

	i = -1;
	while (s[++i])
	{
		f(i, s[i]);
		s++;
	}
}
