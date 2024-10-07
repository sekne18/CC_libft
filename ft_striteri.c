/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jans <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 23:46:58 by jans              #+#    #+#             */
/*   Updated: 2024/10/06 23:55:37 by jans             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	to_upper(unsigned int i, char *c);

int	main()
{
	char s[] = "This is campus 19!";
	ft_striteri(s, to_upper);
	printf("%s\n", s);	
	return (0);
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = -1;
	while (s[++i])
		f(i, &s[i]);
}
/*
void	to_upper(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}
*/
