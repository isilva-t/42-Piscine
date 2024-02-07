/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:10:45 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/28 16:15:07 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_special(char *valor, int size, int valor_max)
{
	int	i;

	i = 0;
	if (valor[0] == valor_max)
	{
		while (i < size)
		{
			ft_putchar(valor[i]);
			i++;
		}
		return ;
	}
	while (i < size)
	{
		ft_putchar(valor[i]);
		i++;
	}
	write (1, &", ", 2);
}

void	ft_print_combn(int n)
{
	char	valor[10];
	char	valor_max[10];
	int		memo;
	int		i;

	if (n <= 0 || n > 9)
		return ;
	i = -1;
	while (++i < n)
	{
		valor[i] = i + 48;
		valor_max[i] = (10 - n) + i + 48;
	}
	ft_print_special(valor, n, valor_max[0]);
	while (valor[0] != valor_max[0])
	{
		i = n - 1;
		while (valor[i] == valor_max[i])
			i--;
		valor[i]++;
		memo = valor[i];
		while (i < n - 1)
			valor[++i] = ++memo;
		ft_print_special(valor, n, valor_max[0]);
	}
}
/*
int	main(void)
{
	ft_print_combn(3);
}*/
