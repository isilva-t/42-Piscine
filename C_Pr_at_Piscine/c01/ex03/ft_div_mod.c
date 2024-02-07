/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:02:56 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/16 16:21:39 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
void	ft_print(int a)
{
	write(1, &a, 1);
}

int	main(void)
{
	int	a;
	int	b;
	int	resul_div;
	int	resul_mod;
	int	*div;
	int	*mod;

	a = 42;
	b = 10;
	div = &resul_div;
	mod = &resul_mod;
	ft_div_mod(a, b, div, mod);
	ft_print(resul_div + '0');
	ft_print('\n');
	ft_print(resul_mod + '0');
	ft_print('\n');
}*/	
