#include <unistd.h>

int	check_double(char a, char b)
{
	if (a == b)
		return (0);
	else
		return (1);
}
void	ft_putstr(char *str)
{
	int	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}


int	main(int ac, char **av)
{
	int	check;
	int	i = 0;
	int j = 0;
	int k = 0;
	int idx = 0;
	char tab1[128];
	char tab2[128];

	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			k = 0;
			check = 1;
			while (idx < 128)
			{
				check = check_double(av[1][i], tab1[k]);

				if (check == 0)
					break;

				else if (check == 1)
				{
					tab1[k] = av[1][i];
				}
				idx++;
				k++;
			}
			i++;
		}
		ft_putstr(&tab1[k]);
	}
}
