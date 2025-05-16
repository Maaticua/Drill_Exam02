#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i = 8;
	unsigned char bits;

	while (i--)
	{
		bits = ((octet >> i & 1) + '0');
		write(1, &bits, 1);
	}
}
unsigned char reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bits;

	while (i--)
	{
		bits = (bits * 2) + (octet % 2);
		octet = octet / 2;
	}
	return (bits);
}

unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}


int main(int ac, char **av)
{
	(void)ac;

	int	i = 0;

	print_bits(2);
	write(1, "\n", 1);
	print_bits(swap_bits(2));
	write(1, "\n", 1);
	print_bits(reverse_bits(2));
}
