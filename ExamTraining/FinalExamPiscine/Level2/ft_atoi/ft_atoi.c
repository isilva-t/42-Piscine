/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:51:59 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/23 14:21:26 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	i;
	int	sinal;
	int	num;

	i = 0;
	sinal = 1;
	num = 0;
	while ((str[i] != '\0' && str[i] >= '\t' && str[i] <= '\r') 
		|| str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sinal = sinal * -1;
			i++;
		}
		else
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (num * sinal);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("%s", "number of arguments incorrect");
		return (0);
	}
	printf("%d", ft_atoi(&argv[1][0]));
	return (0);
}*/
