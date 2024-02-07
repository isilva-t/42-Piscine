/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 08:14:49 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/25 14:46:59 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	ac;

	if (argc < 2)
		return (0);
	ac = 1;
	while (ac < argc)
	{
		i = 0;
		while (argv[ac][i] != '\0')
		{
			ft_putchar(argv[ac][i]);
			i++;
		}
		ft_putchar(10);
		ac++;
	}
	return (0);
}
