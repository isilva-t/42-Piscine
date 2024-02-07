/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:03:54 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/16 17:05:32 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	cont;
	int	mem_temp;

	while (size >= 0)
	{
		cont = 0;
		while (cont < size - 1)
		{
			if (tab[cont] > tab[cont + 1])
			{
				mem_temp = tab[cont];
				tab[cont] = tab[cont + 1];
				tab[cont + 1] = mem_temp;
			}
			cont++;
		}
		size--;
	}
}
/*
int	main(void)
{
	int	tab[5] = {7, 4, 3, 5, 8};
	int	size;
	int	contador_print;
	size = 5;
	ft_sort_int_tab(tab, size);
	//impressora
	contador_print = 0;
	while (contador_print < size)
	{
		int	value_print;
		value_print = tab[contador_print] + '0';
		write (1, &value_print, 1);
		write (1, &"\n", 1);
		contador_print++;
	}
	return (0);
}*/
