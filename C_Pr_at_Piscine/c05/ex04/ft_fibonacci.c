/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:56:04 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/24 15:57:20 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>
#include <time.h>
int	main(void)
{
	clock_t start_time, end_time;
	double cpu_time_used;

	start_time = clock();

	printf ("\n%d", ft_fibonacci(46));
	// index maximo -> 46

	end_time = clock ();
	cpu_time_used = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
	printf("\n\n%f", cpu_time_used);
}*/
	/*if (index == 20)
		return (6765);
	if (index == 19)
		return (4181);
	if (index == 5)
		return (5);
	if (index == 4)
		return (3);
	if (index == 3)
		return (2);*/
