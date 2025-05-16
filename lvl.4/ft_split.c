#include <stdio.h>
#include <stdlib.h>

int	word_count(char *str)
{
	int	i;
	int	count;
	int	in_w;

	i = 0;
	count = 0;
	in_w = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\r'
				|| str[i] == '\t'))
		{
			i++;
		}
		if (str[i] != '\0' && str[i] != ' ' && str[i] != '\r' && str[i] != '\t')
		{
			count++;
			while (str[i] != '\0' && str[i] != ' ' && str[i] != '\r'
				&& str[i] != '\t')
			{
				i++;
			}
		}
	}
	return (count);
}

int	word_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\r' && str[i] != '\t')
		i++;
	return (i);
}

char	**ft_split(char *str)
{
	int		j;
	int		w_count;
	int		w_len;
	char	**tab;

	if (!str)
		return (NULL);
	int i = 0; // idxs for tab
	j = 0;
	int k = 0; // idx for str
	w_count = word_count(str);
	w_len = 0;
	tab = malloc(sizeof(char *) * (w_count + 1));
	if (!tab)
		return (NULL);
	while (i < w_count)
	{
		while (str[k] != '\0' && (str[k] == ' ' || str[k] == '\r'
				|| str[k] == '\t'))
			k++;
		w_len = word_len(str + k);
		tab[i] = malloc(sizeof(char) * (w_len + 1));
		if (!tab[i])
		{
			return (NULL);
		}
		j = 0;
		while (str[k] != '\0' && str[k] != ' ' && str[k] != '\r'
			&& str[k] != '\t')
		{
			tab[i][j] = str[k];
			j++;
			k++;
		}
		tab[i][j] = '\0';
		printf("%s\n", tab[i]);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

int	main(int ac, char **av)
{
	ft_split(av[1]);
}
