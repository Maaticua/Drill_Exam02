#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bits = 0;

	while(i--)
	{
		bits = ((octet >> i & 1) + '0');
		write (1, &bits, 1);
	}
}
unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4)| (octet << 4));
}
unsigned char	reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bits = 0;
	while (i--)
	{
		bits = (bits * 2) + (octet % 2);
		octet = octet / 2;
	}
	return (bits);
}
