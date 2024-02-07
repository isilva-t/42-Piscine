/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:53:13 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/24 20:26:47 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
#include <time.h>
int	main(void)
{
	clock_t start_time, end_time;
	double cpu_time_used;

	start_time = clock();

	printf("%d", ft_is_prime(2)); 	
//	printf("%d", ft_is_prime(98689));

	end_time = clock ();
	cpu_time_used = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
	printf("\n%f", cpu_time_used);
}*/
