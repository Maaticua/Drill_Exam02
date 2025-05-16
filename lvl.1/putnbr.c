#include <unistd.h>

void	ft_putnbr(int num)
{
	char	c;
	if (num > 9)
		ft_putnbr(num / 10);
	c = num % 10 + '0';
	write(1, &c, 1);
}
int	main()
{
	ft_putnbr(45);
	write (1, "\n", 1);
}
