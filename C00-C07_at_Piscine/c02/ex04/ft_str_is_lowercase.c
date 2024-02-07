/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:55:10 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/19 08:39:25 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0') 
	{
		if (!(*str == '\0' || (*str >= 'a' && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "lowercase"; //return 1
//	char	str[] = "otH3Rs"; //return 0
//	char	str[] = ""; //return 1

	printf ("%d", ft_str_is_lowercase(str));
}*/
