#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	else
		return (0);
}
int	ft_strlen(char *str)
{
	int	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

int	main(int ac, char **av)
{
	int	j;

	if (ac == 2)
	{
		int	i = ft_strlen(av[1]) - 1;
		while(i >= 0)
		{
			while (i >= 0 && is_space(av[1][i]))
				i--;
			while (i >= 0 && !is_space(av[1][i]))
				i--;
			j = i + 1;
			while (!is_space(av[1][j]) && av[1][j] != '\0')
			{
				write (1, &av[1][j], 1);
				j++;
			}
			if (i > 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return(0);
}
