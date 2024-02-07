#include "ft.h"
#include <stdio.h>

int	main(void)
{	
	// ft_strcmp test
	/*auto char s1[] = "1234", s2[] = "1233";
	printf("%d", ft_strcmp(s1, s2));*/

	// strlen test
	/*auto char str[] = "test";
	printf("%d", ft_strlen(str));*/

	// ft_swap test
	/*auto int c1 = 1, c2 = 2, *a = &c1, *b = &c2;	
	ft_swap(a, b);
	printf("%d \n", c1);
	printf("%d\n", c2);*/

	//ft_putstr test
	auto char str[] = "test";
	ft_putstr(str);

	// test putchar
	/*auto char str[] = "test";
	auto int i = -1;
	while (str[++i])
	{
		ft_putchar(str[i]);
	}*/
}
