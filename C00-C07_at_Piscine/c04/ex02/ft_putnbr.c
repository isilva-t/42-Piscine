/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:43:03 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/23 12:48:01 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, &"-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}
/*
int	main(void)
{
	int	nb = -2147483648; // inteiro mais pequeno possivel
//	int	nb = -2147483647; // segundo inteiro mais pequeno possivel
//	int	nb = 2147483647; // maior inteiro possivel
//	int	nb = 9; // numero com uma casa decimal
//	int	nb = 0; // teste com zero
//	int	nb = 10; // teste com dez
//	int	nb = 1234; // teste 1234
//	int	nb = -354843213; // teste negativo aleatorio
	ft_putnbr(nb);
}*/
