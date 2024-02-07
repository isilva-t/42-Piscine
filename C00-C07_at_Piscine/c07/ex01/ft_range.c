/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:41:08 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/29 16:26:37 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	auto int range, *array_retorno, i = 0;
	if (min >= max)
		return (NULL);
	range = max - min;
	array_retorno = malloc(sizeof(int) * range);
	if (array_retorno == NULL)
		return (NULL);
	while (i + min < max)
	{
		array_retorno[i] = min + i;
		i++;
	}
	return (array_retorno);
}
/*
#include <stdio.h>
int	main(void)
{
	auto int i = 0, min = 1, max = 9, *array;
	array = ft_range(min, max);
	while (array[i])
	{
	 printf("%d, ", array[i]);
	 i++;
	}
}*/
