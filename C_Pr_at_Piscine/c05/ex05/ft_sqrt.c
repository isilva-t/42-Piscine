/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:00:46 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/24 16:18:17 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	sqrt_t;

	sqrt_t = 0;
	while (sqrt_t <= 46340)
	{
		if (sqrt_t * sqrt_t == nb)
			return (sqrt_t);
		sqrt_t ++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <time.h>
int	main(void)
{
	clock_t start_time, end_time;
	double cpu_time_used;

	start_time = clock();
	
	//printf ("%d", ft_sqrt(0)); 
	// printf ("%d", ft_sqrt(1)); 
	//printf ("%d", ft_sqrt(9)); 
	//printf ("%d", ft_sqrt(900)); 
	// printf ("%d", ft_sqrt(2147483647)); // max int - irracional
	printf ("%d", ft_sqrt(2147395600)); // maximo racional para int

	end_time = clock ();
	cpu_time_used = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
	printf("\n%f", cpu_time_used);
}*/
