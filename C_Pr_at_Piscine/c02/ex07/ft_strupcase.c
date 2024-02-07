/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:52:31 by isilva-t          #+#    #+#             */
/*   Updated: 2024/01/19 08:49:46 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	char	memo_temp;
	int		c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'a' && str[c] <= 'z')
		{
			memo_temp = str[c] - 32;
			str[c] = memo_temp;
		}
		c++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "TeStuPpErCaSe";
	//printf("%s", str);
	printf("%s", ft_strupcase(str));
}*/
