#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	memo;

	memo = *a;
	*a = *b;
	*b = memo;
}
/*
#include <stdio.h>
int	main(void)
{
	int	var1 = 1, var2 = 2;
	int	*a, *b;
	
	a = &var1;
	b = &var2;

	ft_swap(a, b);
	printf("%d", var1);
}*/
