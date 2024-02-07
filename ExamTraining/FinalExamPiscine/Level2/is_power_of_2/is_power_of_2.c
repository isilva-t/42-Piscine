#include <unistd.h>

int	is_power_of_2(unsigned int n)
{
	int	res = 1;
	
	if (n > 0)
	{
		while (res < n)
		{
			res *= 2;
			if (res == n)
				return (1);
		}
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int	n;
	n = 1073741824;
	printf("%d", is_power_of_2(n));
}*/
