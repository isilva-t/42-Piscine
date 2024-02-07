#include <unistd.h>

char	*ft_strrev(char *str)
{
	int len = 0, i = -1;
	char memo;
	
	while (str[len])
		len++;
	while (++i <= --len)
	{	
		memo = str[i];	
		str[i] = str[len];
		str[len] = memo;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "1t2";

	printf("%s", ft_strrev(str));
}*/
