/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 08:21:26 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/29 10:20:49 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_base(int i)
{
	auto char hexa_cache[] = "0123456789abcdef";
	if (i >= 16)
	{
		ft_print_base(i / 16);
		ft_print_base(i % 16);
	}
	else
	{
		write(1, &hexa_cache[i], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	auto int i = 0;
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			write(1, "\\", 1);
			if (str[i] < 16)
				write(1, "0", 1);
			ft_print_base(str[i]);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "Ola____\n_____esta bem?";
	printf("%s\n", str);
	ft_putstr_non_printable(str);
}*/
