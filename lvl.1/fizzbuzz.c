#include <unistd.h>

void putnbr(int num)
{
	char c;
	if (num > 9)
		putnbr(num / 10);
	c = num % 10 + '0';
	write(1, &c, 1);
}

int main()
{
	int num = 1;
	while (num <= 100)
	{
		if (num % 15 == 0)
			write(1, "fizzbuzz", 9);
		else if (num % 3 == 0)
			write(1, "buzz", 5);
		else if (num % 5 == 0)
			write(1, "fizz", 5);
		else
			putnbr(num);
		write(1, "\n", 1);
		num++;
	}
	return (0);
}
