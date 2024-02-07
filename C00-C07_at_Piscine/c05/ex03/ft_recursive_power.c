/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:35:33 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/24 12:55:17 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power > 0)
	{
		return (ft_recursive_power(nb, power - 1) * nb);
	}
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_power(2, 30));
}*/
