/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:10:41 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/24 10:27:59 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb > 12 || nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		nb--;
		result = result * nb;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iteractive_factorial(12));
	return (0);
}*/
