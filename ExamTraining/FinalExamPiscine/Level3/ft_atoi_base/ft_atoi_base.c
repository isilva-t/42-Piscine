#include <unistd.h>

int	converte(char c)
{
		if (c >= 'A' && c <= 'F')
			return (c -= 55);
		else if(c >= 'a' && c <= 'f')
			return (c -= 97);
		else if(c >= '0' && c <= '9')
			return (c -= 48);
	return (0);
}

int	e_valido(char c, int base)
{
	char downcase[16] = "0123456789abcdef";
	char upcase[16] = "0123456789ABCDEF";
	
	while (base--)
	if (c == downcase[base] || c == upcase[base])
		return (1);
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	signal = 1, i = 0, nb = 0;

	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;

	if (str[i] == '-')
	{
		signal *= -1;
		i++;
	}
	while (str[i] && e_valido(str[i], str_base) == 1)
	{
		nb = nb * str_base + converte(str[i]);
		i++;
	}
	return (nb * signal);
}
/*
#include <stdio.h>
int	main(void)
{
	const char teste[] = "10";

	printf("%d", ft_atoi_base(teste, 16));
}*/
