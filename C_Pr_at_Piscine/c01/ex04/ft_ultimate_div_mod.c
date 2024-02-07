/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 08:11:35 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/16 09:03:16 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	memo_temp_1;
	int	memo_temp_2;

	memo_temp_1 = *a;
	memo_temp_2 = *b;
	*a = memo_temp_1 / memo_temp_2;
	*b = memo_temp_1 % memo_temp_2;
}
/*
#include <stdio.h>
int	main(void)
{
	int	num;
	int	divisor;
	int	*a;
	int	*b;

	num = 42;
	divisor = 10;
	a = &num;
	b = &divisor;
	ft_ultimate_div_mod(a, b);
	printf("%d\n", num);
	printf("%d\n", divisor);
		return (0);
}*/
