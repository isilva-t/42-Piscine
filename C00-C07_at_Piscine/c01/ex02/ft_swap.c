/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 08:43:35 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/15 19:29:32 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	memo_temp;

	memo_temp = *a;
	*a = *b;
	*b = memo_temp;
}
/*
void	ft_print(int c)
{
	write (1, &c ,1);
}

int	main(void)
{
	int	valor_a;
	int	valor_b;
	int	*a;
	int	*b;

	valor_a = '4';
	valor_b = '8';
	ft_print(97);
	ft_print(valor_a);
	ft_print('\n');
	ft_print(98);
	ft_print(valor_b);
	ft_print('\n');

	a = &valor_a;
	b = &valor_b;

	ft_swap(a, b);

	ft_print(97);
	ft_print(valor_a);
	ft_print('\n');
	ft_print(98);
	ft_print(valor_b);
	ft_print('\n');

	return (0);
}*/
