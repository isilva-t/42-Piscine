/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 10:24:42 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/22 08:01:36 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i])
	{
		i++;
	}
	return ((s1[i] - s2[i]));
}

/*
#include <stdio.h>
// while - enquanto, s1 difer nulo E s2 difer nulo E s1 igual s2
// incrementa contador e continua a verificar as posicoes seguintes
// assim que encontra uma diferenca, retorna a diferenca numerica
// da tabela ascii entr s1 e s2.
// esta funcao tem como objetivo, obter informacao para ordenar strings por ordem
// alfanumerica.
int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("%d", ft_strcmp(&argv[1][0], &argv[2][0]));
}*/
