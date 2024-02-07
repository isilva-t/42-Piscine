/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 08:02:25 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/22 08:27:17 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	n = n - 1;
	while (s1[i] != '\0' && s1[i] != '\0' && s1[i] == s2[i] && i < n)
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
//declaramos o contador como unsigned int 
//(para nao dar shit ao comparar com "n"
//decrementamos o valor de n em uma unidade
//se n for igual a 0, retorna logo zero, nem testa mais
//enquanto
//	s1 diferente nulo e
//	s1 diferente nulo e
//	s1 igual a s2 e
//	contador menor que n (que ja decrementou um valor)
// retorna s1 menos s2
//	supondo que "n" seja 5 - string com 5 carateres
//	caso o n nao fosse decrementado, o 
//	while iria correr 5 vezes, incrementar o contador para 5
//	e verificar no retorno, a sexta posicao do array (pos 5, de 0 a 5)
//	e e mandatorio que so queremos comparar strings 
//	ate a X tamanho, e nada mais que isso
int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("%d", ft_strncmp(&argv[1][0], &argv[2][0], 5));
}*/
