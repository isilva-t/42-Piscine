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

void	ft_print_hex(int i)
{
	auto char hexa_cache[] = "0123456789abcdef";
	
	if (i >= 16)
	{
		ft_print_hex(i / 16);
		ft_print_hex(i % 16);
	}
	else
		write(1, &hexa_cache[i], 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (num);
}

int	main(int ac, char **av)
{
	int nb;
	
	if (ac == 2)
	{
		nb = ft_atoi(av[1]);
		ft_print_hex(nb);
	}
	write(1, "\n",1);
}
