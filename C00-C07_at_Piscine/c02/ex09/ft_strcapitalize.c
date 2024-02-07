/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:48:20 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/19 08:54:30 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_upcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_upcase(str);
	i = 1;
	while (str[i] != '\0')
	{
		if ((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			|| (str[i - 1] >= '0' && str[i - 1] <= '9')
			|| (str[i - 1] >= 'a' && str[i - 1] <= 'z'))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 32;
			}
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "a*salut,!comment$tu#vas 42mots quarante-deux; cin+et+un";

	printf("%s", ft_strcapitalize(str));
	return (0);
}*/
