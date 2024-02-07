/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:42:10 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/20 18:46:26 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!((str[c] == '\0') || (str[c] >= 'A' && str[c] <= 'Z')
				|| (str[c] >= 'a' && str[c] <= 'z')))
			return (0);
		c++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
//char	str[] = "ASDgfgfdaDFD"; // resulta 1 - so tem letras
char	str[] = "aasdaSDS__1__DFSD"; // resulta 0 - tem outros caracteres
//char	str[] = "112344"; // resulta 0 - tem outros caracteres
//char	str[] = ""; // resulta 1 - a STR esta vazia
	printf("%d", ft_str_is_alpha(str));
}*/
