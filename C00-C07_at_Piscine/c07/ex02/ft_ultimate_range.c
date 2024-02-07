/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:34:26 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/29 17:28:38 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	auto int i = 0, *array, size;
	if (min >= max)
	{
		*range = NULL;
		return (-1);
	}
	size = max - min;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (-1);
	while (i + min < max)
	{
		array[i] = min + i;
		i++;
	}
	*range = array;
	return (tamanho);
}

