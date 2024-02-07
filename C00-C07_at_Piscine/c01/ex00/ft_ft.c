/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:31:36 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/15 18:17:09 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
void	ft_print(int c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	numero;
	int	*nbr;

	numero = 20;
	nbr = &numero;
	ft_ft(nbr);
	ft_print(numero);
	return (0);
}*/
