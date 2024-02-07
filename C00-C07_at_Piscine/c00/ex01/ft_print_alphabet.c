/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 08:21:52 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/13 14:55:28 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	let;

	let = 97;
	while (let <= 122)
	{
		write(1, &let, 1);
		let++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
}*/
