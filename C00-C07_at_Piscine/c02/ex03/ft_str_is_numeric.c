/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:07:19 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/21 13:51:49 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] == '\0' || (str[c] >= '0' && str[c] <= '9')))
		{
			return (0);
		}
		c++;
	}
	return (1);
}
/*
void	ft_print(int c)
{
	c = c + '0';
	write(1, &c, 1);
}
int	main(void)
{
	char	str[] = "1234"; // return 1
//	char	str[] = "abcd1"; //return 0
//	char	str[] = "sdfd5"; //return 0
//	char	str[] = ""; //return 1

	ft_print(ft_str_is_numeric(str));
}*/
