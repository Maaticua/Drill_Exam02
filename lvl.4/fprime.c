#include <stdio.h>
#include <stdlib.h>

void ft_tamboui(int num)
{
	int check = 2;

	if (num <= 0)
		return ;
	else if (num == 1)
		printf("1");

	while (check <= num)
	{
		if (num % check == 0)
		{
			printf("%d", check);
			if(check != num)
				printf("*");
			num = num / check;
		}
		else
			check++;
	}
}
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_tamboui(atoi(av[1]));
	}
	printf("\n");
	return (0);
}
