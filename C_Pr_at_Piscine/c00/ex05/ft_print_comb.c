/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 09:48:09 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/13 14:01:56 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_print_tree_numbers(char hund, char dozen, char unit)
{
	ft_print(hund);
	ft_print(dozen);
	ft_print(unit);
	if (hund == '7')
	{
		return ;
	}
	ft_print(',');
	ft_print(' ');
}

void	ft_print_comb(void)
{
	char	hund;
	char	dozen;
	char	unit;

	hund = '0';
	while (hund <= '7')
	{
		dozen = hund + 1;
		while (dozen <= '8')
		{
			unit = dozen + 1;
			while (unit <= '9')
			{
				ft_print_tree_numbers(hund, dozen, unit);
				unit++;
			}
			dozen++;
		}
		hund++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
