/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:12:07 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/16 10:06:52 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	increment_char;

	increment_char = 0;
	while (str[increment_char] != '\0')
	{
		write(1, &str[increment_char], 1);
		increment_char++;
	}
}
/*
int	main(void)
{
	char	*str;

	str = "teste de escrita \n";
	ft_putstr(str);
	return (0);
}*/
