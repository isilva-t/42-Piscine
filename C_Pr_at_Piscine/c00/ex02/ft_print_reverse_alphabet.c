/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 08:44:36 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/13 14:56:53 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	rev;

	rev = 122;
	while (rev >= 97)
	{
		write(1, &rev, 1);
		rev --;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
}*/
