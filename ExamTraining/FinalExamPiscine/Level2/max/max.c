#include <unistd.h>

int	max(int* tab, unsigned int len)
{
	int	max = 0;
	
	if (len > 0)
	{
		max = tab[--len];
		while (len > 0)
		{
			len--;
			if (tab[len] > max)
				max = tab[len];
		}
	}
	return (max);
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[] = {1, 3, 5, 7, 6, 8, 10, 12, 11, 15};
	unsigned int len = 8;

	printf("%d", max(tab, len));
}*/
