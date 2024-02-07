/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 08:38:58 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/20 18:21:50 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	cont;

	cont = 0;
	while (src[cont] != '\0' && cont < n)
	{
		dest[cont] = src[cont];
		cont++;
	}
	while (cont < n)
	{
		dest[cont] = '\0';
		cont++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "12345";
	char	dest[11];
	unsigned int	n;

	n = 10;
	printf("%s", ft_strncpy(dest, src, n));
	return (0);
}*/	
