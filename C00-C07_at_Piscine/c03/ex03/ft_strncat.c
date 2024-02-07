/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:32:32 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/22 12:58:36 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char*src, unsigned int nb)
{
	unsigned int	i_src;
	unsigned int	i_dest;

	i_dest = 0;
	while (dest[i_dest] != '\0')
	{
		i_dest++;
	}
	i_src = 0;
	while (src[i_src] != '\0' && i_src < nb)
	{
		dest[i_dest] = src[i_src];
		i_src++;
		i_dest++;
	}
	dest[i_dest] = '\0';
	return (dest);
}
/*
#include <stdio.h>
// esta funcao concatena duas strings, mas define
// apenas quantos caracteres forem definidos da
// string fonte
//
// 1o - contar caracteres string dest
// 2o - concatenar carateres src, para dest, a comecar
// 	da posicao do nulo
// 3o - termina dest com um nulo
int	main(int argc, char **argv)
{
	printf("%s", ft_strncat(&argv[2][0], &argv[1][0], 5));
}*/
