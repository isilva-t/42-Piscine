/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:47:50 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/21 13:47:40 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (size < 1)
		return (len);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*
#include <stdio.h>
int	main(void)
{
	char	dest[10];
	char	src[] = "123456789";
	unsigned int	size;

	size = 10;
	printf("%d\n", ft_strlcpy(dest, src, size));
	printf("%s\n", dest);
}*/
