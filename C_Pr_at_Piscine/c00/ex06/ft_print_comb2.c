/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:41:11 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/27 17:51:47 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printa(int nb)
{
	int	ch_esq;
	int	ch_dir;

	if (nb >= 10)
	{
		ch_esq = nb / 10;
		ch_dir = nb % 10;
		ft_putchar(ch_esq + 48);
		ft_putchar(ch_dir + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nb + 48);
	}
}

void	ft_print_comb2(void)
{
	int	esq;
	int	dir;

	esq = 0;
	while (esq <= 98)
	{
		dir = esq + 1;
		while (dir <= 99)
		{
			ft_printa(esq);
			write(1, &" ", 1);
			ft_printa(dir);
			if (esq != 98)
				write(1, &", ", 2);
			dir++;
		}
		esq++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
