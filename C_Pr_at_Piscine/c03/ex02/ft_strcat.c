/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:20:23 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/22 11:31:23 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i_src;
	int	i_dest;

	i_dest = 0;
	while (dest[i_dest] != '\0')
	{
		i_dest++;
	}
	i_src = 0;
	while (src[i_src] != '\0')
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
// objetivo - copiar src para o final da dest
// vamos precisar de 2 contadores, para src, e dest
// contar os caracteres da dest, 
// para preencher a src partir do final da dest (a partir da pos nula)
// depois, enquanto a src nao for nula, copia para a posicao de dest
// no final, coloca um nulo, e acaba a funcao
int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("%s", ft_strcat(&argv[2][0], &argv[1][0]));
}*/
