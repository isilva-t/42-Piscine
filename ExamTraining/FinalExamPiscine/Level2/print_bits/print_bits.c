#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i = 0;
	char byte[8];
	unsigned char rest;
	
	while (i < 8)
		byte[i++] = '0';
	while (--i >= 0 && octet != 0)
	{
		rest = octet;
		octet = octet / 2;
		byte[i] = rest % 2 + '0';
	}
	i = 0;
	while (i < 8)
		write(1, &byte[i++], 1);
}
/*
int	main(void)
{
	print_bits(1);
}*/	
