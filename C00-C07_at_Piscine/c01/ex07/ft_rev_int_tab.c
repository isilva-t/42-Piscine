/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:47:04 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/16 19:49:49 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	cont;
	int	memo_temp;

	cont = 0;
	while (cont < (size / 2))
	{
		memo_temp = tab[cont];
		tab[cont] = tab[size - 1 - cont];
		tab[size - 1 - cont] = memo_temp;
		cont++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[5] = {1, 7, 3, 8, 6};
	int	size;

	size = 5; //representa tamanho 4, de zero a 3

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}*/
